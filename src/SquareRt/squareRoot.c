/*CS4900 
2/15/2017
Greg Ostroy

Definition for the function that computes the square root portion of the quadratic equation for a quadratic solver

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

#include<stdlib.h>
#include<math.h>
#include"squareRoot.h"
#include<float.h>

/*Computes the square root portion of the quadratic equation
parameters-coefficients a,b,c, and an address to store the result
returns- 0= there will be one root, 1= two roots, -1=imaginary roots
*/
int squareRoot(double a, double b, double c, double *result)
{	
	double macheps= FLT_EPSILON;//machines relative error

	if(fabs(b*b - 4*a*c)<=macheps)//answer rounds to zero, one root
	{
		*result=0.0;
		return 0;
	}
	*result=sqrt(b*b - 4*a*c);
	
	if(isnan(*result))//imaginary number
		return -1;
	
	return 1;//there will be two roots
}
