#include<stdio.h>

void main()
{
	int a[]={10,20,30,40,50};
	int *p[]={a,a+1,a+2,a+3,a+4,a+5};
	int **pp=p;
	pp++;
	printf("%d\n%d\n%d\n",pp-p,*pp-a,**pp);
}
