/*
lab3-is-sorted.c
Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

// func to sort array using bubble sort
void bubbleSort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) { // swap elements if in wrong order
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main(int argc, char *argv[]) {

  // num of elements in array
  int numElements = argc - 1;

  // store elements in array
  int *arr = (int *)malloc(numElements * sizeof(int));

  // store smdline args in array as ints
  for (int i = 1; i <= numElements; i++) {
    arr[i - 1] = atoi(argv[i]);
  }

  bubbleSort(arr, numElements);

  // print sorted array one per line
  for (int i = 0; i < numElements; i++) {
    printf("%d\n", arr[i]);
  }

  // free allocated mem
  free(arr);

  return 0;
}
