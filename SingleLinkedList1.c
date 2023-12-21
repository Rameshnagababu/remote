#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *create();
void display(struct node *n1);
struct node *create()
{
	int n;
	struct node *n1=NULL;
	struct node *n2=NULL;
	struct node *n3=NULL;
	printf("Enter the length of the linkendlist i.e how many elements you want to add to a linkedlist:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		n2=malloc(sizeof(struct node));
		printf("Enter the data for the node %d into the linkedlist:",i);
		scanf("%d->",&(n2->data));
		n2->next=NULL;
		if(n1==NULL)
		{
			n1=n2;
		}
		else
		{
			n3=n1;
			while(n3->next!=NULL)
				n3=n3->next;
			n3->next=n2;
		}
	}
	return n1;
}
void display(struct node *n1)
{
	while(n1!=NULL){
		printf("%d->",n1->data);
		n1=n1->next;
	}
	printf("NULL\n");
}
void displaySingleLinkedListFormat(struct node *n1){
	printf("Single Linked list Representation:\n");
	while(n1->next!=NULL){
		printf("%d %d->",n1->data,n1->next);
		n1=n1->next;
	}
	printf("%d NULL\n",n1->data);		
}
int main()
{
	struct node *HEAD=NULL;
	HEAD=create();
	display(HEAD);
	displaySingleLinkedListFormat(HEAD);
}
