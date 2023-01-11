#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
struct node *current,*head,*temp,*ptr,*preptr;
int i;
void creation()
{   int n;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
if(n>=1)
{
head=(struct node*)malloc(sizeof(struct node));
printf("enter data of node 1\n");
scanf("%d",&head->data);
head->next=NULL;
current=head;

    for(i=2;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data of node");
        scanf("%d",&temp->data);
        temp->next=NULL;
	current->next=temp;
	current=temp;
    }
  current->next=head;
}
}
void display()
{
int n=1,i;
if(head==NULL)
{printf("List is empty\n");}
else
{
current=head;
printf("DATA IN THE LIST\n");
do
{
printf("Data%d=%d",n,current->data);
current=current->next;
n++;
}
while(current!=head);
}
}
void insbeg()
{int n=1;
ptr=head;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data of the node that is to be added\n");
scanf("%d",&temp->data);
while(ptr->next!=head)
{
ptr=ptr->next;
}
ptr->next=temp;
temp->next=head;
head=temp;
printf("DATA ADDED SUCCESSFULLY\n");
}
void insend()
{
printf("Enter the data of the node to be inserted\n");
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->next=NULL;
ptr=head;
while(ptr->next!=head)
{ptr=ptr->next;}
ptr->next=temp;
temp->next=head;
printf("DATA ADDED IN THE NODE SUCCESSFULLY\n");
}
void delbeg()
{
if(head==NULL)
{
	printf("Underflow\n");
}
else
{
ptr=head;
while(ptr->next!=head)
{ptr=ptr->next;}
ptr->next=head->next;
free(head);
head=ptr->next;
}
}
void delend()
{
if(head==NULL)
{
printf("Underflow\n");
}
else
{
ptr=head;
while(ptr->next!=head)
{preptr=ptr;
ptr=ptr->next;}
preptr->next=head;
free(ptr);
}
}
void main()
{
int c;
do{printf("\n0.EXit\n1.Creation\n2.Insertion of node at the beginning.\n3.Insertion at the end\n4.Deleetion of node at the beginning.\n5.Deletion at the end\n6.Display\n");  
printf("Enter a choice\n");
scanf("%d",&c);
switch(c)
{
case 1:
	creation();
	break;
case 2:
	insbeg();
	break;
case 3:
	insend();
	break;
case 4:
	delbeg();
	break;
case 5:
	delend();
	break;
case 6:		
	display();
	break;
default:printf("Invalid choice\n");
}
}
while(c!=0);
}
