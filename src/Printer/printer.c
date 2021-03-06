/*CS4900 
2/15/2017
Greg Ostroy

Definition for the function that prints the roots found by a quadratic solver

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>
#include "printer.h"

/*Prints the roots of a quadratic equation
parameters-pointers to two floats to recieve the root values
*/
void printRoots(float* root1, float* root2)
{
	float macheps=FLT_EPSILON;//relative error for the machine
	if(isnan(*root1) || !isfinite(*root1))//root is too large or not a number
		printf("Root one is not a number or is outside the range a float type can hold\n");
	else
	{
		float error=macheps*(*root1);//abs error for root1
		if(root1==root2) //one root
			printf("The root is %10.6e + or - %.6e\n",*root1,error);
		else
			printf("Root1 is %10.6e + or - %.6e\n",*root1,error);
	}
	if(isnan(*root2) || !isfinite(*root2))//root is too large or not a number
		printf("Root two is not a number or is outside the range a float type can hold\n");
	else if(root1!=root2)//two roots
	{
		float error=macheps*(*root2);//abs error for root2
		printf("Root2 is %10.6e + or - %.6e\n",*root2,error);
	}
}
