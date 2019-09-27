#include<stdio.h>
#include<pthread.h>
#define max 16

//max num of threads
#define Th_max 4

//array
int a[max]={1,5,7,10,12,14,15,18,20,30,40,50,200,100,90,220};
//array to store max of threads
int max_num[Th_max]={0};
int thread_no=0;

//func to find max
void maximum(void* arg)
{
	int i,num=thread_no++;
	int maxs=0;
	
	for(i=num*(max/4);i<(num+1)*(max/4);i++);
	{
	if(a[i]>maxs)
	{
		maxs=a[i];
	}
	}
	max_num[num]=maxs;
	
}

//driver code
int main()
{
	int maxs=0;
	int i;
	pthread_t threads[Th_max];
	
	//creating 4 threads
	for(i=0;i<Th_max;i++)
		pthread_create(&threads[i],NULL,maximum,(void*)NULL);
		
		//joining 4 threads i.e waiting for all threads to complete
		
	for(i=0;i<Th_max;i++)
		pthread_join(threads[i],NULL);
//finding max element 
//by individual thhreads
	for(i=0;i<Th_max;i++)
	{
	if(max_num[i]>maxs)
	maxs=max_num[i];
	}
	printf("maximum element is : %d",maxs);
	return 0;
	
}
