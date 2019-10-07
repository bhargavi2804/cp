#include<stdio.h>
char* cipher(char c[])
{
	int i=0;
	
	while(c[i]!='\0')
{
	c[i]=c[i]+1;
	i++;
}
	//ch=(char*)c;
	return(c);
}
void main()
{
	char c[]="abc";
	cipher(c);
	printf("%s",c);
	
}
