#include<stdio.h>
#include<stdlib.h>


	struct node
	{
	int data;
	struct node* next;	
	};
void addh(struct node* head)
{
	struct node* temp=NULL;
	//adding new head
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=0;
	temp->next=head;
	head=temp;
	
	while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}
	
}

void addend(struct node* head,struct node* third)
{
	struct node* tmp;
	struct node* final;
	tmp=(struct node*)malloc(sizeof(struct node));
	final=(struct node*)malloc(sizeof(struct node));
	//traversing through list using tmp	
	tmp=head;	
	final->data=5;
		
	while(tmp->next!=NULL)
{
	tmp=tmp->next;
}
	tmp->next=final;
	final->next=NULL;
	
	/*third->next=tmp;
	tmp->next=NULL;*/

	while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}
	
}

void mid(struct node* head)
{
	struct node* mid;
	int n;
	mid=(struct node*)malloc(sizeof(struct node));
	struct node* tmpp;
	tmpp=(struct node*)malloc(sizeof(struct node));
	mid->data=10;
	printf("enter after which node you want to insert a node");
	scanf("%d",&n);	

	tmpp=head;
	for(int i=1;i<n;i++)
	tmpp=tmpp->next;

	mid->next=tmpp->next;
	tmpp->next=mid;
	
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
	
	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;
 	
	/*while(head!=NULL)
	{
	printf("%d  ",head->data);
	head=head->next;
	}*/
	
	addh(head);
	addend(head,third);
	mid(head);	
}	

