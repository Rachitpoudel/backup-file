#include<stdio.h>
voidmain()
{
	float sales,comm,tax,ts;
	printf("enter the sales");
	  scanf("%f",&sales );
	if (sales<=1000)
	{
		comm=0;
		tax=0;
	}
	else if(sales<9000)
	{
		comm=sales*0.01;
		tax=100;
	}
	else if(sales<18080)
	{
		comm=sales*0.02;
		tax=sales*0.01;
	}
	else if(sales<29000)
	{
		comm=sales*0.0225;
		tax=sales*0.0125;
	}
	 else {
	 	comm=sales*0.05;
	 	tax=sales*0.0139;
	 }
	 ts=(sales+comm-tax);
	 printf("%f", tax);
}
