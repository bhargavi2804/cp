#include<stdio.h>
int top=-1;
int a[10];

void push()
{	
	int n;
	printf("enter a no.");
	scanf("%d",&n);
	a[++top]=n;
	
}

void pop()
{
	top--;
	
}

void main()
{
	
	push();
	push();
	
	for(int i=top;i!=-1;i--)
	printf("%d\n",a[i]);
	
	//for(int i=0;i<top;i++)
	//printf("%d",a[i]);
	//pop();

	//for(int i=0;i<top;i++)
	//printf("%d",a[i]);
}
