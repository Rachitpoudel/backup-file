#include<stdio.h>
float forbes()
{
	
	float a,b,sum;
	printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);
	sum=a+b;
	printf("\n from function\tsum of %f and %f =%f",a,b,sum);
	return(sum);
}
int main()
{
	float r;
	/*printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);*/
	
	r=forbes();//here a and b are actual argument
	printf("\n sum =%g",r);
}
