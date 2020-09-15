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
   void	delete_end()
	{
		struct node*ptr=head;
		struct node*preptr=NULL;
	while(ptr->link!=NULL)
	{
		preptr=ptr;
		ptr=ptr->link;
	}
	preptr->link=NULL;
	free(ptr);
	return;
}

int main()
{
	head=NULL;
	printf("how many nodes\n");
	int i, n,data;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		Insert_end(data);
		Print_LL();
	}
		printf("linked list is created\n");
	printf("curent last node will be  deleted\n");
		delete_end();
		Print_LL();
}
