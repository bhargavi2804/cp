#include<stdio.h>
int swap(int *a,int *b);
void main()
{
	int a=5;
	int b=3;
	printf("a=%d b=%d",a,b);
	swap(&a,&b);

}

int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d b=%d",*a,*b);
}
