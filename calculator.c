#include <stdio.h>
int main()
{	double a,b;
	char c;
	printf("Please input two number:");
	scanf("%lf %lf",&a,&b);
	printf("Enter an operator:");
	scanf(" %c",&c);
	switch(c){
		case'+':
			printf("Result:%0.2lf\n",a+b);
			break;
		case'-':
			printf("Result:%0.2lf\n",a-b);
			break;
		case'*':
			printf("Result:%0.2lf\n",a*b);
			break;
		case'/':
			if (b=!0)
			printf("Result:%0.2lf\n",a/b);
			else
			printf("Result:0\n");
			break;
			
		default:
	printf("Invlid operator\n");
		}	
		return 0;
		}
