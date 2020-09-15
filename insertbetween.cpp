#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*link;
};
struct node*head;
void Insert_end(int data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=data;
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	struct node*next=head;
	while(next->link!=NULL)
	{
		next=next->link;
	}
	next->link=temp;
	return;
}

	void Print_LL()
	{
	struct node*next=head;
	while(next->link!=NULL)
    {
    	
    	printf("%d",(*next).data);
    	next=next->link;
		}
	printf("%d",(*next).data);	
	}
	insert_pos(int pos,int value)
	{
		int i;
		struct node*neww=(struct node*)malloc(sizeof(struct node*));
	neww->data=value;
		struct node*newww=head;
	for(i=1;i<pos-1;i++)
	{
		newww=newww->link;	
	}
	neww->link=newww->link;
	newww->link=neww;
	return;
}

int main()
{
	head=NULL;
	printf("how many nodes\n");
	int i, n,data,value,position;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		Insert_end(data);
		Print_LL();
	}
		printf("linked list is created\n");
	printf("enter position\n");
	scanf("%d",&position);
	printf("enter value to insert in between\n");
	scanf("%d",&value);
	if(position<n)
	{
		insert_pos(position,value);
		Print_LL();
	}
}
