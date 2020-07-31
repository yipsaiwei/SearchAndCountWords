#include "unity.h"
#include "SearchAndCount.h"
#include  "mock_ReadLine.h"
#include <stdlib.h>

void setUp(void){}

void tearDown(void){}

void  test_searchAndCountWordInLines_given_the_word_and_a_file_with_5_lines_expect_a_count_of_5(void){
  int count;
  char  *filename = "./test/data/my_note.txt";
  char  *word = "the";
  char  *lines[] = {
    //   v                        v       v                               
    "In the world of yesterday, they had the super computer that can calculate eazy calculations.",
    //v 
    "the cost of such machine was high.",
    "such machine was IBM 5100",
    //v
    "the comp world",
    "coma comb come comfier comic compact...",
    NULL
  };
  char  **testlines = malloc(sizeof(char *) * 1024);
  *testlines = *lines;
  // Mock
  readLines_ExpectAndReturn(filename, (char **)&testlines);
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
  
  TEST_ASSERT_EQUAL(5, count);
}

void  test_searchAndCountWordInLines_given_comp_word_and_a_file_with_5_lines_expect_a_count_of_4(void){
  int count;
  char  *filename = "./test/data/my_note.txt";
  char  *word = "comp";
  char  *lines[] = {
    //                                               v                                           
    "In the world of yesterday, they had the super computer that can calculate eazy calculations.",
    "the cost of such machine was high.",
    "such machine was IBM 5100",
    //     v
    "the comp world",
    //                              v       v
    "coma comb come comfier comic compact company...",
    NULL
  };
  char  **testlines = malloc(sizeof(char *) * 1024);
  *testlines = *lines;
  // Mock
  readLines_ExpectAndReturn(filename, (char **)&testlines);
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
  
  TEST_ASSERT_EQUAL(4, count);
}

void  test_searchAndCountWordInLines_given_com_word_and_a_file_with_5_lines_expect_a_count_of_9(void){
  int count;
  char  *filename = "./test/data/my_note.txt";
  char  *word = "com";
  char  *lines[] = {
    //                                              v                                           
    "In the world of yesterday, they had the super computer that can calculate eazy calculations.",
    "the cost of such machine was high.",
    "such machine was IBM 5100",
    //    v
    "the comp world",
    //v    v    v    v       v     v       v
    "coma comb come comfier comic compact company...",
    NULL
  };
  char  **testlines = malloc(sizeof(char *) * 1024);
  *testlines = *lines;
  // Mock
  readLines_ExpectAndReturn(filename, (char **)&testlines);
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
  
  TEST_ASSERT_EQUAL(9, count);
}

void  test_searchAndCountWordInLines_given_ca_word_and_a_file_with_5_lines_expect_a_count_of_3(void){
  int count;
  char  *filename = "./test/data/my_note.txt";
  char  *word = "ca";
  char  *lines[] = {
    //                                                            v   v              v                                         
    "In the world of yesterday, they had the super computer that can calculate eazy calculations.",
    "the cost of such machine was high.",
    "such machine was IBM 5100",
    "the comp world",
    "coma comb come comfier comic compact company...",
    NULL
  };
  char  **testlines = malloc(sizeof(char *) * 1024);
  *testlines = *lines;
  // Mock
  readLines_ExpectAndReturn(filename, (char **)&testlines);
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
  
  TEST_ASSERT_EQUAL(3, count);
}