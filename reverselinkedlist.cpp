#include<stdio.h>
#include<stdlib.h>

struct node
{  
	int data;
	struct node*link;
};
struct node*head;
struct node*head2;
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
void reverse_list()
{
  struct node* prev;
  struct node* curr;
   struct node* next;
   curr=head;
   prev=NULL;
   while(curr!=NULL)
{

   next=curr->link;
   curr->link=prev;
   prev=curr;
   curr=next;
}
   head=prev;
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
	

int main()
{
	head=NULL;
	head2=NULL;
	printf("how many nodes\n");
	int i, n,data;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		Insert_end(data);
		Print_LL();
	
	}
{
printf("\nreverse list is\n");
		reverse_list();
		Print_LL();
	
	}
		
}

