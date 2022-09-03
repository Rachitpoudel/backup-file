#include<stdio.h>
void forbes(float x, float y)//here x and y are formal argument
{
	float sum;
/*	float a,b,sum;
	printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);*/
	sum=x+y;
	printf("\n sum of %f and %f =%f",x,y,sum);
	return;
}
int main()
{
	float a,b;
	printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);
	
	forbes(a,b);//here a and b are actual argument
}
