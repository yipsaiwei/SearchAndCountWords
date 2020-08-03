#include "unity.h"
#include  <stdio.h>
#include  <malloc.h>
#include  <stdlib.h>
#include  <string.h>
#include "ReadLine.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void  test_char_readLines_line1()
{
  char  *filename = "./test/File/FileIO.txt";
  char  **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(*lines, "In the world of today, we have a super computer which can compute complex calculations.\n"); 
  free(lines);
}

void  test_char_readLines_line2()
{
  char  *filename = "./test/File/FileIO.txt";
  char  **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(lines[1], "the cost of such machine is high.\n");
  free(lines);
}

void  test_char_readLines_line3()
{
  char  *filename = "./test/File/FileIO.txt";
  char  **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(lines[2], "comput science.");
  free(lines);
}

void  test_char_readLines_line4()
{
  char  *filename = "./test/File/FileIO.txt";
  char  **lines = readLines(filename);
  TEST_ASSERT_EQUAL_STRING(lines[3], NULL);
  free(lines);
}