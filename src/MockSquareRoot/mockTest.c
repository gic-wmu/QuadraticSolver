/*CS4900 
2/15/2017
Greg Ostroy

Definition for a mock squareRoot object. It tests the the square root logic in the absence of real input*/

#include<stdlib.h>
#include<float.h>
#include "../Cunit/cunit.h" 
#include "mockSquareRoot.h"

int main()
{
	cunit_init();
	char str[100];
	setUpMockSqrt(1.0,4.4,3.2,2.56125);
	float macheps=FLT_EPSILON;
	int pass=testMockSqrt(macheps);
	assert_int_eq(str,pass,0);
	return 0;
}
