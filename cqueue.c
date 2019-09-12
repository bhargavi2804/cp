#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE],front=-1,rear=-1;

void enqueue(int value)
{
	if(front==0 && rear==SIZE-1 || rear==front-1)		
	printf("queue is full");
	if(front==-1)
	front=0;
	rear=(rear+1)%SIZE;
	queue[rear]=value;	
}

void dequeue()
{
	int element;
	if(front==rear==-1)
	printf("queue is empty");

	else
{	
	element=queue[front];
	if(front==rear)
{
	front=-1;
	rear=-1;
}
	else
	front=(front+1)%SIZE;
}
}	
void display()
{	
	int i;
	if(front==rear==-1)
	printf("empty queue\n");	
	for(i=front;i!=rear;i=(i+1)%SIZE)
	printf("%d\n",queue[i]);
	printf("%d",queue[i]);
}

void main()
{
	int c,value;
	char ch;
	printf("choose an option:\n1.enqueue\n2.dequeue\n3.display\n");
	scanf("%d",&c);
	do
	{
	switch(c)
	{
	case 1: printf("enter a value to be enqueued\n");
		scanf("%d",&value);	
		enqueue(value);
		break;
	case 2: dequeue();
		break;
	case 3:display();
		break;
	default : printf("invalid input");
	}
	printf("do you want to continue");
	scanf("%c",&ch);
	
	}while(ch!='n');
	
}
