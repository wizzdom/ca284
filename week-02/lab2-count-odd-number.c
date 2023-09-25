/*
 lab2-count-odd-number.c
 Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    // init array with length argc - 1
    int length = argc - 1;
    int array[length];
    int count = 0;

    // fill array from cmdline args
    for (int i = 0; i < length; ++i){
        array[i] = atoi(argv[i + 1]);
    }
    // check for odds
    for (int i = 0; i < length; ++i) {
        if (array[i] % 2 == 1) {
            count++;
        }
    }
    // print number of odds
    printf("%d\n", count);
    return 0;
}
