/*
lab3-leap-year.c
Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

// func to check if year is leap year
int isLeapYear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return 1;
  } else {
    return 0;
  }
}

// func to print leap years in a range
void printLeapYears(int startYear, int endYear) {
  for (int year = startYear; year <= endYear; year++) {
    if (isLeapYear(year)) {
      printf("%d\n", year);
    }
  }
}

int main(int argc, char *argv[]) {

  // comvert cmdline args to int
  int startYear = atoi(argv[1]);
  int endYear = atoi(argv[2]);

  // check if years are within valid range
  if (startYear < 1582 || startYear > 2020 || endYear < 1582 ||
      endYear > 2020) {
    printf("Invalid input. Years should be between 1582 and 2020.\n");
    return 1;
  }

  printLeapYears(startYear, endYear);

  return 0;
}
