#include<stdio.h>
void forbes()
{
	float a,b,sum;
	printf("\n enter first number");
	scanf("%f",&a);
	printf("\n enter second number");
	scanf("%f",&b);
	sum=a+b;
	printf("\n sum of %f and %f =%f",a,b,sum);
	return;
}
int main()
{
	forbes();
}
