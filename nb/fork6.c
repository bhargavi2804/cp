#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"incorrect no. of argument. Plz pass oneinteger\n");
		return 1;
	}
	pid_t cpid;
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++)
{
		sleep(30);
		fork();
}
	
	fprintf(stderr,"pid=%ld,ppid=%ld\n",(long)getpid(),(long)getppid());
	while(1);
}
