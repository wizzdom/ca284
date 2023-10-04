/*
lab3-calculator.c
Author: DC
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// calculate the product of 2 nums
float multiply(float num1, float num2) { return num1 * num2; }

// calculate the division of 2 nums
float divide(float num1, float num2) {
  // don't divide by 0
  if (num2 == 0) {
    printf("invalid\n");
    exit(0);
  }
  return num1 / num2;
}

// calculate factorial
int factorial(int num) {
  if (num == 0 || num == 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

int main(int argc, char *argv[]) {

  // convert operator to lowercase
  char operator[20];
  strcpy(operator, argv[1]);
  for (int i = 0; operator[i]; i++) {
    operator[i] = tolower(operator[i]);
  }

  // convert args to floats and ints
  float num1 = atof(argv[2]);
  float num2 = atof(argv[3]);

  // calculator go brrrrr
  float result;
  if (strcmp(operator, "add") == 0) {
    result = num1 + num2;
  } else if (strcmp(operator, "subtract") == 0) {
    result = num1 - num2;
  } else if (strcmp(operator, "multiply") == 0) {
    result = multiply(num1, num2);
  } else if (strcmp(operator, "divide") == 0) {
    result = divide(num1, num2);
  } else if (strcmp(operator, "factorial") == 0) {
    if (num1 < 0) {
      printf("Factorial is undefined for negative numbers\n");
      exit(1);
    }
    result = factorial((int)num1);
  } else {
    printf("Invalid operator: %s\n", operator);
    exit(1);
  }

  // print result
  printf("%f\n", result);

  return 0;
}
