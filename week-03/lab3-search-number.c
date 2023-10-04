/*
lab3-search-number.c
Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

// search number in array and return index
int searchNumber(int target, int *arr, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i; // return index
    }
  }
  return -1; // return -1 if number not found
}

int main(int argc, char *argv[]) {

  // target number
  int target = atoi(argv[1]);

  // number of elements in array
  int numElements = argc - 2;

  // store elements in array
  int *arr = (int *)malloc(numElements * sizeof(int));

  // store cmdline args in array
  for (int i = 2; i < argc; i++) {
    arr[i - 2] = atoi(argv[i]);
  }

  // search for target number in array
  int index = searchNumber(target, arr, numElements);

  // print result
  if (index != -1) {
    printf("Found %d at %d\n", target, index);
  } else {
    printf("%d not found\n", target);
  }

  // free allocated mem
  free(arr);

  return 0;
}
