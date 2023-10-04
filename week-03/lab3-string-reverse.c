/*
lab3-string-reverse.c
Author: DC
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void reverseString(char *str) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    char tmp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = tmp;
  }
}

int main(int argc, char *argv[]) {

  // get string from arg
  char *inputString = argv[1];

  reverseString(inputString);

  // print reversed string
  printf("%s\n", inputString);

  return 0;
}
