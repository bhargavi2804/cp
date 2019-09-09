#include<stdio.h>

void main()
{
	char a[20]="anubhav is trainer";
	char b[20];
	int i,j=0,m=0,l=0;
	int n=strlen(a);
	
	for(i=n-1;i>0;i--)
	{
	if((a[i])==' ')
{
	m=i+1;
	/*if(i==0)
	m=i;*/
	
	while((a[j+m])!=' '&&(a[j+m])!='\0')
	{
	b[j+l]=a[m+j];
	j++;
	}
}
	l=j;
}
printf("%s",b);
}
	
	

	
	
