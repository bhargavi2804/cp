#include<stdio.h>
#define SIZE 5
int queue[SIZE],front=-1,rear=-1;
void enqueue(int value)
{
	if(rear==SIZE-1)
	printf("queue is full\n");
	else
	{
	if(front==-1)
		front=0;
	rear++;
	queue[rear]=value;
	
	}
}
void dequeue()
{
	if(front==-1)
	printf("queue is empty\n");
	else
	{
	front++;
	//when front goes out of size with front++
	if(front>rear)
	front=rear=-1;
	}
}
void display()
{
	if(rear==-1)
	printf("empty queue\n");	
	for(int i=front;i<=rear;i++)
	printf("%d\n",queue[i]);
}


void main()
{
	dequeue();
	enqueue(1);
	enqueue(2);			
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display();

	dequeue();
	dequeue();
	enqueue(3);
	
	//printf("after dequeue\n");
	display();
	
}
