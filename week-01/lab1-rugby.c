/*
 rugby.c
 author DC
 */

/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/

int main(int argc, char *argv[])
{
/* variable initialisation */
	int try = 0;
	int conversion = 0;
	int penalty = 0;
	int dropgoal = 0;
	int total = 0;
/* all command-line arguments come in as character strings, so atoi turns them into ints*/
	try = atoi(argv[1]);
   try = try * 5;
	conversion = atoi(argv[2]);
   conversion = conversion *2;
	penalty = atoi(argv[3]);
   penalty = penalty * 3;
	dropgoal = atoi(argv[4]);
   dropgoal = dropgoal * 3;

	total  = try + conversion + penalty + dropgoal;

   printf ("%d\n",total);

    return (0); /* exit correctly*/
} /* end program*/
