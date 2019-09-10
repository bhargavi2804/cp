#include<stdio.h>
#include<stdlib.h>

	struct node
	{
	int data;
	struct node* next;	
	};

void delb(struct node* head)
{
	struct node* tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp=head;
	head=tmp->next;
	free(tmp);
	
	while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}
}

void dele(struct node* head)
{
	struct node* tmp;
	struct node* x;
	x=(struct node*)malloc(sizeof(struct node));
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp=head;
	while(tmp->next!=NULL)
	{
	x=tmp;
	tmp=tmp->next;
	}
		
	x->next=NULL;
	free(tmp);

	while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}
}

void delm(struct node* head)
{
	struct node* tmp;
	int n;
	tmp=(struct node*)malloc(sizeof(struct node));
	
	printf("enter node you want to del node");
	scanf("%d",&n);	
	
	tmp=head;
	if(n!=1)
{
	for(int i=1;i<n;i++)
	tmp=tmp->next;
	
	head->next=tmp->next;
	free(tmp);
}
 	else 
{
	head=tmp->next;
	free(tmp);	
}

	while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}
}

void main()
{
	
	//initiating 3 nodes
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;

	

	//allocating dymanic memory to the nodes
	head=(struct node*)malloc(sizeof(struct node)); 
    	second = (struct node*)malloc(sizeof(struct node)); 
    	third = (struct node*)malloc(sizeof(struct node));
	
	head->data=5;
	head->next=second;

	second->data=6;
	second->next=third;

	third->data=7;
	third->next=NULL;
 	
	/*while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}*/
	
	//delb(head);
	//dele(head);
	delm(head);
}
