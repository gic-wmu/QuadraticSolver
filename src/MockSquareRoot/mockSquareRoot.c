/*CS4900 
2/15/2017
Greg Ostroy

Definition for a mock squareRoot object. It tests the the square root logic in the absence of real input*/

#include<stdlib.h>
#include<math.h>
#include "../SquareRt/squareRoot.h"
#include "mockSquareRoot.h"

static double _a =-1.0;//the preset a coeff
static double _b =-1.0;//the preset b coeff
static double _c =-1.0;//the preset c coeff
static double _result=-1.0;//the expected result

/*Sets the valuse to be passed to the function square root
parameters - the coefficients a.b,and c and the expected result*/
void setUpMockSqrt(double a, double b, double c, double result)
{
	_a=a;
	_b=b;
	_result=result;
}

//resets static values
void clearMockSqrt()
{
	_a =-1.0;
	_b =-1.0;
	_result=-1.0;
}

/*check if the output of squareRoot is in the margine of error for the expected result
*/
int testMockSqrt(float macheps)
{
	double observed =0.0;
	squareRoot(_a,_b,_c,&observed);
	if(abs(_result-observed)<macheps*observed)
		return 1;
	return 0;
}
