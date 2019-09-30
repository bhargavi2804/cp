#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<pthread.h>
void *f1(void *);
void *f2(void *);

int main()
{
	pthread_t tid1,tid2;
	//create 2 child threads n wait for theirtermination
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	printf("\n bye from main thread\n");
	return 0;
}

void *f1(void *arg)
{
	for(int i=0;i<5;i++)
	{
	printf("%s","PUCIT");
	fflush(stdout);
	sleep(1);
	}
	pthread_exit(NULL);
}

void *f2(void *arg)
{
	for(int i=0;i<5;i++)
	{
	printf("%s","ARIF");
	fflush(stdout);
	sleep(1);
	}
	//pthread_exit(NULL);
	return NULL;
}

	
