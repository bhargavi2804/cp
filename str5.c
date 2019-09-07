#include<stdio.h>
#include<string.h>
void main()
{	
	char *s="berry";
	char *d,*c;
	
	//char *strcpy(d,s);
	printf("%s\n%s",s,d);
	memset(c,'\0',sizeof(c));
	strncpy(c,s,2);
	printf("%s\n%s",s,c);
}
