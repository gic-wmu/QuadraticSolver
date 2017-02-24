/*CS4900 
2/15/2017
Greg Ostroy

Definition of parser

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

#include <stdio.h>
#include "parser.h"

/*This function takes 3 string arguments and parses floats from them.
parameters- The string from which to parse the floats, and the three float addresses to hold the floats
returns- 0 if three floats were parsed, 1 otherwise.
*/
int parseCoefficients(const char* input, float* a,float* b, float* c)
{
	if (sscanf(input,"%f %f %f",a,b,c) !=3)//must pass three values
		return 1;
	return 0;
}
