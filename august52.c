#include<stdio.h>
#include<string.h>

int main()
{
	char fname[56],lname[34],a[56];
	int i,c;
	puts("\n please enter first name");
	gets(fname);
	puts("\n please enter last/sir name");
	gets(lname);
	c=0;  
	for(i=1;i<strlen(lname);i++)
	{
		a[c]=lname[i];
		c=c+1;
	}
	
	printf("\n %c%s   %c .", toupper(lname[0]),strlwr(a),toupper(fname[0]));
}
