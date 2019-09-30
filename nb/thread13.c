#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<pthread.h>

void *f1(void *arg);

int main()
{
	char *msg[]={"thread1","thread2","thread3","thread4","thread5"};
	pthread_t tids[5];
	for(int i=0;i<5;i++)
	{
	pthread_create(&tids[i], NULL, f1, (void*)msg[i]);
	pthread_join(tids[i], NULL);
	}
	
	printf("main():reporting that all child threads have terminated\n");
	exit(0);
}

void *f1(void *arg)
{
	printf("i m child %s\n",(char*)arg);
	pthread_exit(NULL);
}
