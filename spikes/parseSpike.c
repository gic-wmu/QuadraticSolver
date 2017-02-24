#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[2]="5";
	float num;
	int ret=sscanf(str,"%f",&num);
	printf("%d %f\n",ret,num);	
}
