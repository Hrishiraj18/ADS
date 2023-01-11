#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *rear,*front,*ptr,*temp;
int i;
void enqueue()
{
ptr=(struct node*)malloc(sizeof(struct node));
printf("ENter the data");
scanf("%d",&ptr->data);
ptr->next=NULL;
if(front==NULL)
{
front=rear=ptr;
front->next=rear->next=NULL;
}
else
{
rear->next=ptr;
rear=ptr;
rear->next=NULL;
}
printf("ENQUEQUE CMPLT\n");
}
void display()
{
	if(front==NULL)
	{printf("Stack empty\n");}
	else
	{
	temp=front;
	while(temp!=NULL)
	{
	printf("%d->",temp->data);
	temp=temp->next;
	}
	printf("--NULL\n");
	}
}
void dequeue()
{
if(front==NULL)
{
printf("Queue empty\n");
}
else if(front==rear)
{
ptr=front;
free(ptr);
}
else
{
ptr=front;
front=front->next;
free(ptr);
}
printf("DEQUQUE CPMNLT");
}
void main()
{
int c;
do
{
printf("\nEnter the choice\n0.Exit\n 1.enqueue\n2.dequeue\n3.display\n");
scanf("%d",&c);
switch(c)
{
case 1:enqueue();
	break;
case 2:dequeue();
	break;

case 3:display();
	break;
default: printf("Invalid choice\n");
	break;
}
}
while(c!=0);
}
