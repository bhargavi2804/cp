#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int cpid=fork();
	if(cpid==0) //0 implies child
		printf("hello i m child\n");
		
	else
		printf("hello i m parent\n");
	return 0;
}
