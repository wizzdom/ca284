/*
lab3-duplicated-number.c
Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

// find duplicated number in array
int findDuplicatedNumber(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        return arr[i]; // return duplicated number
      }
    }
  }
  return -1; // return -1 if no duplicated number found
}

int main(int argc, char *argv[]) {

  // num of elements in array
  int numElements = argc - 1;

  // store elements in array
  int *arr = (int *)malloc(numElements * sizeof(int));

  // store cmdline args in array as ints
  for (int i = 1; i <= numElements; i++) {
    arr[i - 1] = atoi(argv[i]);
  }

  int duplicatedNumber = findDuplicatedNumber(arr, numElements);

  // print result
  if (duplicatedNumber != -1) {
    printf("%d\n", duplicatedNumber);
  } else {
    printf("no duplicated number\n");
  }

  // free allocated mem
  free(arr);

  return 0;
}
