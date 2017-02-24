/*CS4900 
2/15/2017
Greg Ostroy

Test for the function that implements the quadratic formula for a quadratic solver
*/

#include <stdlib.h>
#include "../Cunit/cunit.h" 
#include "../SquareRt/squareRoot.h"
#include "quadraticFormula.h"

int main()
{
	cunit_init();

	float root1=0.0;
	float root2=0.0;
	double sqrt=0.0;
	char str[100];

	float a=1.0f;
	float b=0.2f;
	float c=0.01f;
	squareRoot(a,b,c,&sqrt);
	quadraticFormula(a,b,sqrt,&root1,&root2);
	assert_float_eq(str,root1,root2);
	assert_float_eq(str,root1,0.1);

	a=1.0f;
	b=4.4f;
	c=3.2f;
	squareRoot(a,b,c,&sqrt);
	quadraticFormula(a,b,sqrt,&root1,&root2);
	assert_float_eq(str,root1,3.480625);
	assert_float_eq(str,root2,0.919375);
	return 0;
}
