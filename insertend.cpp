#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};

struct node* head;

void Insert_end(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	//(*temp).data=data;
	temp->data=data;
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	struct node* p=head;
	while(p->link!=NULL)
	{
		p=p->link;
	}
	p->link=temp;
	return;
}

void Print_LL()
{
	struct node* p=head;
	while(p->link!=NULL)
	{
		printf("%d",p->data);
		p=p->link;
	}
	printf("%d",(*p).data);

}
int main()
{
	head=NULL;
	printf("how many nodes?\n");
	int n; int i; int data;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		Insert_end(data);
		Print_LL();
	}
}
