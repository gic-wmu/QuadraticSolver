#include <stdio.h>
#include <float.h>

 int main()
{
	printf("%.10f\n",FLT_EPSILON);
	//answer for my machine 0.0000001192
	float dm=0.0;
	float dmacheps = 0.5;
	while( (1.0 + (dm = dmacheps/2.0) ) != 1.0  ) {
   		dmacheps = dm;
	}
	printf("%.20f\n",dmacheps);
	//0.00000000000000022204

	return 0;
}


