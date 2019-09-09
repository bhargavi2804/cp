#include<stdio.h>
void A(int n);

void main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);	
	A(n);
	
}

void A(int n)
{
	if(n>0)
	{
	A(n-1);
	printf("%d\n",n);
	A(n-1);
	}
}
