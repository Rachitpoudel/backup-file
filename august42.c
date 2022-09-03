#include<stdio.h>
int main()
{
	char name[45],address[56];
	FILE *pt;
	pt=fopen("record.dat","r");
	while(!feof(pt))
	{
		fscanf(pt,"\n %s %s", name, address);
		printf("\n %s %s", name, address);
	}
	fclose(pt);
}
