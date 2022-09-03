#include<stdio.h>
int main()
{
	char name[45],address[56];
	FILE *pt;
	int p;
	pt=fopen("record.dat","r");
	p=9;
	while(!feof(pt))
	{
		fscanf(pt,"\n %s %s", name, address);
		if(toupper(name[0])=='R')
		{
			p=0;
			printf("\n To,%s    %s", (name), address);
		}
		
	}
	if(p==9)
	{
		printf("\n sorry record not found");
	}
	fclose(pt);
}
