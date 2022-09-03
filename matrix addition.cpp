#include<stdio.h>
void main()
{
	float a[4][4],b[5][5],c[5][5];
	int i,j,r1,c1,r2,c2;
	printf("\n order of first matrix=");
	scanf("%d %d",&r1,&c1);
	printf("\norder of second matrix=");
	scanf("%d %d",&r2,&c2);
	if ((r1==r2)&&(c1==c2));
	{
		for(i=1; i<=r1; i=i+1;)
		{
		   for(j=1; j<=c1; j=j+1;)
		   {
		   	scanf("%f",& a[i][j]);
		   }
		}
		for(i=1; i<=r1; i=i+1;)
		{
			for(j=1; j<=c1; j=j+1;)
			{
				scanf("%f",&b[i][j]);
			}
		}
		for(i=1; i<=r1; i=i+1;);
		{
			for(j=1; j<=c1; j=j+1;)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	for(i=1; i<=r1; i=i+1;)
	{
		printf("\n");
		for (i=1; i<=c2; i=i+1;)
		{
			printf("\t %f",c[i][j]);
		}
	}
	else
	{
		printf("order of matrix be equal");
	}
}
