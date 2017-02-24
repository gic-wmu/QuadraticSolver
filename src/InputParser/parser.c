/*CS4900 
2/15/2017
Greg Ostroy

Definition for the function that parses user input to float coefficients for a quadratic solver
*/

#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include <math.h>

/*converts three strings to their float versions. Prints a message if strings are not valid floats. Valid 
floats are numbers >=0
 params-3 strings and 3 float addresses
 returns 0=valid float, 1 or greater=negative number
*/
int parseCoefficients(const char* a, const char* b, const char* c, float* af, float* bf, float* cf)
{
	if (sscanf(a,"%f",af)!=1)
		return 1;
	if (sscanf(b,"%f",bf)!=1)
		return 1;
	if (sscanf(c,"%f",cf)!=1)
		return 1;
	if(*af<=0 || *bf<=0 || *cf<=0)
		return 1;
	if(isnan(*af)|| isnan(*bf) || isnan(*cf))//if someon types "nan" as an argument, this test is needed
		return 1;
	return 0;
}
