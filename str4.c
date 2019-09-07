#include<stdio.h>
#include<string.h>
void main()
{	
	char *s="berry";
	char d[5],c[4];
	memset(c,'\0',sizeof(c));
	strcpy(d,s);
	printf("%s\n%s",s,d);
	strncpy(c,s,2);
	printf("%s\n%s",s,c);
	
	//char *ss="err";
	
	printf("%s",strstr(s,"err"));
}
