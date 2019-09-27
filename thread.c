#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
//normal c func that is executed as thread
//when its name is specified in  pthread_create

int g=0;

void *myThreadFun(void *vargp)
{
	sleep(50);
	//printf("printing geeks quiz from thread\n");
	//return NULL;
	
	//store the value argument passes to this thread
	int *myid=(int *)vargp;
	//let us create static variable to observe itx changes
	static int s=0;
	//change static n global variables
	++s;++g;
	printf("thread id: %d, static: %d ,global: %d\n",*myid,s,g);
	
}


int main()
{
	int i;
	pthread_t tid;
	//printf("before thread\n");
	//pthread_create(&thread_id,NULL,myThreadFun,NULL);
	//pthread_join(thread_id,NULL); //other func is main func
	//printf("after thread\n");
	//exit(0);
	
	//let us create 3 threads
	for(i=0;i<10;i++)
	pthread_create(&tid,NULL,myThreadFun,(void*)&tid);
	
	pthread_exit(NULL);
	return 0;
}
