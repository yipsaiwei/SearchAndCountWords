#include "SearchAndCount.h"
#include <stdio.h>
#include  "ReadLine.h"
#include  <stdlib.h>
#include <string.h>

//char  *(*)[]  readLines(char *filename);

int searchAndCountWordInLine(char *wordToFind, char *line){
  int j = 0, count = 0;
  for(int i = 0; line[i]!=0; i++){
    if(line[i]==wordToFind[j]){     
       j++;
  } else {
       j = 0;
    }
    if(wordToFind[j]==0){
      count++;
      j = 0;
    }
  }
  return  count;
}

int searchAndCountWordInLines(char  *wordToFind, char  *filename){
  int i = 0, count=0;
  char  **lines = readLines(filename);
  while (*lines!=NULL){
  //printf("%s\n", *lines);
  count += searchAndCountWordInLine(wordToFind, *lines);
  lines++;
  i++;
  }
  for (i; i>0; i--)       // Move the pointer to its initial address
  {
    lines--;
  }
  free(*lines);
  return count;
}

//In the world of today, we have a super computer which can compute complex calculations. the cost of such machine is high. comput science. 
