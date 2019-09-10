#include<stdio.h>
struct node
{
	int data;
	struct node* next;
};

void printlist(struct node* head)
{
	struct node* s;
	s=head;
	if(s!=NULL)
{
	printf("%d ",head->data);
	printlist(head->next);
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
 	
	printlist(head);

}
