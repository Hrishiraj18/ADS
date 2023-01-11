#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*ptr,*top=NULL;
int i;
void push()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the value of node\n");
	scanf("%d",&temp->data);
	temp->next=top;
	top=temp;
	printf("Item added\n");
}
void display()
{
	if(top==NULL)
	{printf("Stack empty\n");}
	else
	{
	temp=top;
	while(temp!=NULL)
	{
	printf("%d->",temp->data);
	temp=temp->next;
	}
	printf("--NULL\n");
	}
}

void pop()
{
if (top==NULL)
{
	printf("Stack empty\n");
}	
else{
	ptr=top;
	top=top->next;
	free(ptr);
    }
printf("Item pushed\n");
}
void topstack()
{
if(top==NULL)
{printf("top is empty\n");
}
else
{
printf("The top of stack is %d\n",top->data); 
}
}
void main()
{
int c;
do
{
printf("\nEnter the choice\n0.Exit\n 1.push\n2.pop\n3.top\n4.display\n");
scanf("%d",&c);
switch(c)
{
case 1:push();
	break;
case 2:pop();
	break;

case 3:topstack();
	break;

case 4:display();
	break;
default: printf("Invalid choice\n");
		break;
}
}
while(c!=0);
}
