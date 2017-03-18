#include<stdio.h>
#include<stdlib.h>

//takes a float as input and prints it back
int main()
{
	char str[2]="5";
	float num;
	int ret=sscanf(str,"%f",&num);
	printf("%d %f\n",ret,num);
	return 0;	
}
