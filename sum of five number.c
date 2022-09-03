#include <stdio.h>
int main()
{
float a,b,c,d,e,x;
printf("enter five number");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
if ((a>0 )&& (b>0)&& (c>0)&& (d>0)&& (e>0))
{
	x=a+b+c+d+e;
	printf("the sum is %f",x);
}
    else
    {
    	printf(" invalid input");
	}
}
