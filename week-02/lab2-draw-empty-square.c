/*
 lab2-draw-empty-square.c
 Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    if (argc == 1) {
        printf("No input given!\n");
        return 1;
    }
    int length;
    length = atoi(argv[1]);
    // first row
    for (int i = 0; i < length; ++i) {
        printf("*");
    }
    printf("\n");
    // sides
    for (int i = 0; i < length - 2; ++i) {
        printf("*");
        for (int j = 0; j < length - 2; ++j) {
            printf(" ");
        }
        printf("*\n");
    }
    // last row
    for (int i = 0; i < length; ++i) {
        printf("*");
    }
    printf("\n");
    return 0;

}
