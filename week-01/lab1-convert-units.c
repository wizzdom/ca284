/*
 convert-units.c
 author DC
 */

/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/

/* Function: Main
 parameters: int argc (argument count)
 char *argv[] an array of command-line arguments
description:  Takes a single argument and computes area of circle
 */

int main(int argc, char *argv[])
{
/* variable initialisation */
	float cm = 0;
	float inch = 0.0;
/* all command-line arguments come in as character strings, so atoi turns them into ints*/
	cm = atoi(argv[1]);

   inch = cm / 2.54;

    /* print to two decimal places*/
    printf ("%.2f\n",inch); /* We only want to show only two values to the right of the decimal point*/

    return (0); /* exit correctly*/
} /* end program*/
