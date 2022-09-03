#include<stdio.h>
int main()
{
	int rev,a,i,n,rem,m;
	printf("Enter a number:");
	scanf("%d",&m);
	for(i=100;i<=m;i++)
	{
	n=i;
	rev=0;
	a=0;
	while(n>0)
	{
		rem=n%10;
		a=a+rem*rem*rem;
		rev=rev*10+rem;
		n=n/10;
	}
	if(a==i)
	printf("\n\t %d",i);
}
}
