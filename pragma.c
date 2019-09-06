#include<stdio.h>
void func1();
void func2();
#pragma startup func1
#pragma exit func2
void func1()
{
	printf("inside func1\n");
}
void func2()
{
	printf("inside func2\n");
}
int main()
{
	printf("inside main func");
	return 0;
}
