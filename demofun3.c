#include<stdio.h>
float forbes(float x, float y)//here x and y are formal argument
{
	float sum;
/*	float a,b,sum;
	printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);*/
	sum=x+y;
	printf("\n from function\tsum of %f and %f =%f",x,y,sum);
	return(sum);
}
int main()
{
	float a,b,r;
	printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);
	
	r=forbes(a,b);//here a and b are actual argument
	printf("\n sum of %f+%f=%g",a,b,r);
}
