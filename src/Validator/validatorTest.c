/*CS4900 
2/15/2017
Greg Ostroy

Test for parser functions
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include"validator.h"
#include "../Cunit/cunit.h" 

int main()
{	
	float a=2.545;
	float b=3.5;
	float c=5.0;
	char str[100];

	cunit_init();
	//valid numbers
	int result = checkCoefficients(&a,&b,&c);
	assert_int_eq(str,result,0);
	//invalid numbers
	a=-8.2;//negative number
	b=3.5;
	c=5.0;
	result = checkCoefficients(&a,&b,&c);
	assert_int_eq(str,result,1);

	a=-8.2;
	b=pow(2,39);//too large
	c=5.0;
	result = checkCoefficients(&a,&b,&c);
	assert_int_eq(str,result,1);

	a=-8.2;
	b=pow(2,-39);//too small
	c=5.0;
	result = checkCoefficients(&a,&b,&c);
	assert_int_eq(str,result,1);

	char nan[4]="nan";
	a=7.7;
	b=.02;
	sscanf(nan,"%f",&c);//not a number	
	result = checkCoefficients(&a,&b,&c);
	assert_int_eq(str,result,1);

	return 0;
}

