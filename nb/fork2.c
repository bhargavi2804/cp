#include<stdio.h>
#include<unistd.h>

int gvar=555;
int main()
{
	int lvar=54;
	int cpid=fork();
	if(cpid==0)
	{
	//sleep(30);
	printf("i m a child process with pid=%ld, gvar=%d,lvar=%d a\n",(long)getpid(),gvar,lvar);
	}
	else
	{
	//sleep(30);
	printf("i m a parent process with pid=%ld, gvar=%d,lvar=%d a\n",	(long)getpid(),gvar,lvar);
	}
	return 0;
}
