/*
 lab2-print-day.c
 Author: DC
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   // init day and convert to int
    int day = atoi(argv[1]);
    // check day of week
    switch (day){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input!\n");
            break;
    }
    return 0;
}
