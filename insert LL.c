#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void insert();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("press 1 for  create \n2 for view\n3 for insert");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:insert();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}


}
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 //view fun
 void view()
 {
 	struct node*t;
 	t=head;
 	while(t!=NULL)
 	{
 		printf("%d\t",t->data);
 		t=t->next;
	}
	printf("\n");
 }
void insert() 
{
	int target;
	struct node *temp,*trav,null;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter item to be inserted");
	scanf("%d",temp->data);
	temp->next=NULL;
	printf("enter the node after which u want to insert data");
	scanf("%d,&target");
	if(trav==tail)
	{tail=trav;}
	while(trav!=NULL)
	{
		if(trav->data=target)
		break;
		else
		trav=trav->next;
	}
	temp->data=trav->data;
	trav->next=temp;

}
