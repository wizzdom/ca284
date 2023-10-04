/*
lab3-find-longest-word.c
Author: DC
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  // get input sentence
  char *sentence = argv[1];

  // init variables
  char longestWord[100];
  int longestLength = 0;
  int currentLength = 0;
  int wordStart = 0;
  bool inWord = false;

  // iterate throughchars in sentence
  for (int i = 0; sentence[i] != '\0'; i++) {
    // check if the current char is not a space
    if (sentence[i] != ' ') {
      if (!inWord) {
        wordStart = i;
        inWord = true;
      }
      currentLength++;
    } else if (inWord) {
      // calculate length of current word
      if (currentLength > longestLength) {
        // update the longest word and length
        strncpy(longestWord, &sentence[wordStart], currentLength);
        longestWord[currentLength] = '\0';
        longestLength = currentLength;
      }
      // reset current word length
      currentLength = 0;
      inWord = false;
    }
  }

  // check the last word after the loop ends
  if (inWord && currentLength > longestLength) {
    strncpy(longestWord, &sentence[wordStart], currentLength);
    longestWord[currentLength] = '\0';
  }

  // print longest word
  printf("%s\n", longestWord);

  return 0;
}
