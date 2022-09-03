#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum;
	sum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i=i+1)
	{
		sum=sum+pow(3,i);
		printf("\t3^%d",i+1);
	}
	printf("%d",sum);
}
