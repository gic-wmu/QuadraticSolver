/*CS4900 
2/15/2017
Greg Ostroy

Definition for the function that prints the roots found by a quadratic solver
*/

#include<math.h>
#include "printer.h"

int main()
{
	float r1=5.0;
	float r2=3.3;
	printRoots(&r1,&r2);
	printRoots(&r1,&r1);//somae address will be passed twice if there is one root
	r1=pow(2,200);//too big
	r2=8.662;
	printRoots(&r1,&r2);
	r1=0.0365;
	r2=sqrt(-1);//nan
	printRoots(&r1,&r2);
	return 0;
}
