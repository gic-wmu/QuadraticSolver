# include <stdio.h>
# include <stdlib.h>

//takes input and prints it back
int main()

{
	char a[20];
	char b[20];
	int done=0;// did user enter all the needed information?
	while(done==0)
	{
		printf("please enter three white space  positive number\n");
		if(scanf("%s%s",a,b)>0)
		{
			done=1;
			printf("%s%s",a,b);
		}
	}
	return 0;
}
