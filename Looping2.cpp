#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	for (i=2; i<=n ;i=i+2)
	{
		
		printf("%d\t",i*i);
	}
	return 0;
}
