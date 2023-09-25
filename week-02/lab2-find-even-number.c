/*
 lab2-find-even-number.c
 Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    int length = argc - 1;
    int array[10];
    int check = 0;
    // fill array
    for (int i = 0; i < length; ++i) {
        array[i] = atoi(argv[i + 1]);
    }
    // check even
    for (int i = 0; i < length; ++i){
        if (array[i] % 2 == 0) {
            printf("%d - %d\n", i, array[i]);
            check = 1; // set to 1 if even found
        }
    }
    // if no even number found
    if (check == 0) {
        printf("Not found!\n");
    }
    return 0;
}
