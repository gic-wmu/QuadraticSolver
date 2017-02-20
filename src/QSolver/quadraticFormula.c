/*CS4900 
2/15/2017
Greg Ostroy

Definition for the function that implements the quadratic formula for a quadratic solver

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

#include "quadraticFormula.h"

/*Computes the roots of a quadratic equation using the quadratic formula
parameters-coefficient a, b and sqrt= sqrt(b^2 -4ac), and 2 adresses to store the roots
*/
void quadraticFormula(double a, double b, double sqrt, float* root1,float* root2 )
{	
	*root1=(b+sqrt)/(2*a);
	if(root1!=root2)//two roots
		*root2=(b-sqrt)/(2*a);
	
}
