  
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int x;
	struct node*link;
	
};
struct node*head;
void insert_beg(int data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	(*temp).x=data; 
	(*temp).link=head;
	head=temp;
}
void Print_LL()
{
	struct node*next=head;
	while(next!=NULL)
	{
		printf("%d",(*next).x);
		next=(*next).link;
	}
	printf("\n");
}
 int main()
 {
 	head=NULL;
 	int n,i,data;
 	printf("total no of nodes\n");
 	scanf("%d",&n);
 	for (i=0;i<n;i++)
 	{
 		scanf("%d",&data);
 		insert_beg(data);
 		Print_LL();
	 }
 }
