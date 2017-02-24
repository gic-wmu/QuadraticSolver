#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

double product(const char* a, const char* b)
{
	double af;
	double bf;
	sscanf(a,"%lf", &af);
	sscanf(b,"%lf", &bf);
	return af * bf;
}

int main()
{
	float result=pow(2,10);
	printf("%20.11e\n",result);
	//double relativeErr=(abs(result-1024.0)/1024.0)*100;
	//printf("error is %20.11e percent\n",relativeErr);
	
	float resf=2.2* 4;
	printf("%20.11e\n",resf);
	double relativeErr=(abs(resf-8.8)/8.8)*100;
	printf(" relative error is %20.11e percent\n",relativeErr);

	result=pow(2,200);
	printf("%20.11e\n",result);// result "inf"

	result=pow(2,-200);
	printf("%20.11e\n",result);//0

	result=product("nan","2");
	printf("%20.11e\n",result);//nan

	//result = 0/0;
	//printf("%20.11e\n",result); //floating point exception
}
