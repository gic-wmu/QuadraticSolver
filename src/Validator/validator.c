/*CS4900 
2/15/2017
Greg Ostroy

Definition for the function that checks that coefficients for a quadratic solver are valid
*/

#include <stdio.h>
#include <stdlib.h>
#include "validator.h"
#include <math.h>

/*converts three strings to their float versions. Prints a message if strings are not valid floats. Valid 
floats are numbers >=0
 params-3 strings and 3 float addresses
 returns 0=valid float, 1 or greater=negative number
*/
int checkCoefficients(float* af, float* bf, float* cf)
{
	if(*af<=0 || *bf<=0 || *cf<=0)//negative,zero value
		return 1;
	if(isnan(*af)|| isnan(*bf) || isnan(*cf))//if someon types "nan" as an argument, this test is needed
		return 1;
	if(!isfinite(*af)|| !isfinite(*bf) || !isfinite(*cf))//number is too large for a float
		return 1;
	return 0;
}
