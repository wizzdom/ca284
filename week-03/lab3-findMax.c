/*
lab3-findMax.c
Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

// find max in array
int findMax(int *arr, int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main(int argc, char *argv[]) {

  // number of int args
  int numArgs = argc - 1;

  // allocate mem for int array to store values
  int *arr = (int *)malloc(numArgs * sizeof(int));

  // convert cmdline args to ints and put in array
  for (int i = 1; i <= numArgs; i++) {
    arr[i - 1] = atoi(argv[i]);
  }

  // find max in array
  int max = findMax(arr, numArgs);

  // print max
  printf("%d\n", max);

  // free allocated mem
  free(arr);

  return 0;
}
