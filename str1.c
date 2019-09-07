#include<stdio.h>
void main()
{	
	char *a="world";
	int i,j;
	for(i=0,j=5;i<j;a[i++]=a[j--])
	printf("%s\n",a);
	printf("%s",a);
}
