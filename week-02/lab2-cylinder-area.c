/*
 lab2-cylinder-area.c
 Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

// define PI as a constant
#define PI 3.1415

int main(int argc,  char*argv[])
{
    double radius, height, area;             // initialise variables
    // check if no input is given
    if (argc == 1) {
        printf("No input given!\n");
        // checking if two inputs are given
    } else if (argc == 3){
        radius = atoi(argv[1]);
        height = atoi(argv[2]);
        // check if inputs are nonnegative
        if (radius < 0 || height < 0) {
            printf("The radius or height cannot be negative!\n");
            return 1;
        }
        area = 2*PI*radius*height + 2*PI*radius*radius;    // calculate area
        printf("%.2f\n", area);                            // print area
        return 0;
    } else {
        printf("Two arguments needed!\n");                // if only one or more than 2 arguments are given

    }

}
