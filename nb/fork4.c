#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("must enter one argument(an integer)\n");
		exit(1);
	}
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++)
	fork();
	printf("PUCIT\n");
	exit(0);
}
