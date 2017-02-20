/*CS4900 
2/15/2017
Greg Ostroy

The main function for a quadratic solver. It prompts the user to enter 3 positive numbers a, b, 
and c for the quadratic equation ax^2 +bx +c=0. It return real roots if there are any. The user 
is informed if there are no real roots, or if the numbers are outside the range that a float 
type.

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

#include<stdio.h>
#include "../InputParser/parser.h"
#include "../Printer/printer.h"
#include "../QSolver/quadraticFormula.h"
#include "../SquareRt/squareRoot.h"
int main()
{
	int finished=0;
	printf("Welcome.\n");
	while(finished==0)//loop through application until user chooses to exit
	{
		printf("If you would like to solve a quadratic equation type 'y', or type any key to quit.\n");
		{
			char input ='n';
			scanf("%c",&input);
			if(input=='y'|| input=='Y')
			{
				float a=0.0;
				float b=0.0;
				float c=0.0;
				int valid = 1;
				while(valid!=0)//keep prompting the user until they enter valid data
				{
					char as[32];
					char bs[32];
					char cs[32];
					printf("For the quadratic equation ax^2 + bx +c =0, please enter the values for coefficients a,b,and c, as three white space separated positive numbers\n");
					char dump[2];//trailing return char 
					scanf("%s%s%s%c",as,bs,cs,dump);
					
					valid=parseCoefficients(as,bs,cs,&a,&b,&c);//convert string input to floats
					if(valid !=0)//invalid input
					printf("You did not enter valid numbers\n");
				}
				double sqrt=0.0;
				int sqrtCode=squareRoot(a,b,c,&sqrt);//determine sqrt(b^2 -4ac)
				if(sqrtCode==-1)//imaginary roots
					printf("The equation has no real roots\n");
				else//real roots
				{
					if(sqrtCode==0)//one root
					{
						float root1=0.0;
						quadraticFormula(a,b,sqrt,&root1,&root1);//determine b-sqrt(b^2 -4ac)/2a
						printRoots(&root1,&root1);
					}
					else//two roots
					{
						float root1=0.0;
						float root2=0.0;
						quadraticFormula(a,b,sqrt,&root1,&root2);
						printRoots(&root1,&root2);
					}
				}
			}
			else
				finished=1;
		}
	}
	return 0;
}
