#include<stdio.h>
void A(int n);
void a(int n);
void main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);	
	A(n);
	a(n);
}

void A(int n)
{
	if(n>0)
	{
	printf("%d\n",n);
	A(n-1);
	}
}
void a(int n)
{
	if(n>0)
	{
	
	a(n-1);
	printf("%d\n",n);
}
}
