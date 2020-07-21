#include "ReadLine.h"
#include  <stdio.h>
#include  <malloc.h>
#include  <stdlib.h>
#include  <string.h>


char  **readLines(char  *filename, int *length){
    char  **lines = malloc(sizeof(char *) * 1024);
  char  buffer[1024];
  FILE *fptr;
  fptr = fopen(filename, "r");
  if (fptr == NULL)
  {
     printf("Issue in opening the input file");
  }
  int i = 0;
   while( !feof(fptr))
  {
    fgets(buffer, 1024, (FILE*)fptr);
    *lines = strdup(buffer);
    //printf("%s", buffer);
    //printf("%s", *lines);
    lines++;
    i++;
  }
  *length = i;
   for (i; i>0; i--)
  {
    lines--;
  }
  fclose(fptr);
  // Write your code here
  // fopen the filename
  // Get each line and store in lines
  return  lines;
}

/*
void freeLines(char  **lines){
	free(lines);
}
*/
