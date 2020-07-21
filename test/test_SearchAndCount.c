
#include "unity.h"
#include "SearchAndCount.h"
#include  "ReadLine.h"

void setUp(void){}

void tearDown(void){}

void test_SearchAndCount_given_2_same_words_the(void){
  //"In the world of today, we have a super computer which can compute complex calculations. the cost of such machine is high. comput science. ";
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "the";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(2, count);
}

void test_SearchAndCount_given_2_same_words_compute(void){
  //"In the world of today, we have a super computer which can compute complex calculations. the cost of such machine is high. comput science. ";
  int count ;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "compute";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(2, count);
}

void test_SearchAndCount_given_3_same_words_comput(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "comput";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(3, count);
}

void test_SearchAndCount_given_5_same_word_co(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "co";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(5, count);
}

void test_SearchAndCount_given_4_same_word_com(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "com";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(4, count);
}

void test_SearchAndCount_given_2_same_word_of(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "of";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(2, count);
}

void test_SearchAndCount_given_0_same_word_abc(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "abc";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(0, count);
}

void test_SearchAndCount_given_0_same_word_scientist(void){
  int count;
  //                                                             1                                                           1       1                   
  char *line = "modern scien";
  char *wordToFind = "scientist";
  count = searchAndCountWordInLine(wordToFind, line);
    TEST_ASSERT_EQUAL(0, count);
}


void  test_searchAndCountWordInLines_given_4_same_word_comp(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "comp";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
  
  TEST_ASSERT_EQUAL(4, count);
}

void test_searchAndCountWordInLines_given_3_same_word_hi(void){
  int count;
  char  *filename = "C:/Projects/textFiles/FileIO.txt";
  char  *word = "hi";
  //Run the code under test
  count = searchAndCountWordInLines(word, filename);
  TEST_ASSERT_EQUAL(3, count);
}

