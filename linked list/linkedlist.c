#include<stdio.h>
#include<stdlib.h>
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
    for(i=0;i<n;i++)
    {
        temp==(struct node*)malloc(sizeof(struct node));
        printf("Enter data of node");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
          head=temp;
          current=temp;
        }
        else
        {
         current->next=temp;
         current=temp;
        }
    }
    printf("linkedlist\n");
    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL");

}
void insbeg()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of node to be inserted");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL");

}
void insbet()
{   int pos;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data of new node\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    printf("enter the node after which to be inserted");
    scanf("%d",&pos);
    ptr=head;
    if(head==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        while(ptr->data!=pos)
        {
           ptr=ptr->next;
        }
         temp->next=ptr->next;
            ptr->next=temp;
    }

    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL");

}
void insend()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data for node\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    ptr=head;
    if (head==NULL)
    {
        printf("underflow\n");
    }
    else
    {
       while(ptr->next!=NULL)
       {
           ptr=ptr->next;
       }
       ptr->next=temp;
    }
    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL\n");
}
void delbeg()
{
    if(head==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);
    }
    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL");
}
void delbet()
{
    int pos;
    if(head==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        printf("enter the data after which you want to delete node");
        scanf("%d",&pos);
        ptr=head;
        preptr=ptr;
        while(preptr->data!=pos)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
    }
    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL");
}
void delend()
{
    if(head==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        free(ptr);
    }
    for(current=head;current!=NULL;current=current->next)
    {
        printf("%d->",current->data);
    }
    printf("NULL\n");
}
void trav()
{
    for(current=head;current!=NULL;current=current->next)
        {
        printf("%d->",current->data);
    }
    printf("NULL\n");
}
void searching()
{   int pos=0,item,flag=0;
    printf("enter the value to be searched");
    scanf("%d",&item);
    ptr=head;
    if(head==NULL)
    {
        printf("no elements to be searched\n");
    }
    else
    {
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            printf("item found at %d\n",pos+1);
            flag=0;
            break;
        }
        else
         {
            flag=1;
         }
         pos++;
         ptr=ptr->next;
    }
    if(flag==1)
    {
    printf("item not found\n");
    }
    }
}


void main()
{int a;
do
{printf("\n0.Enter\n1.Create a linked list\n2.Insert node in the beginning\n3.Insert node in between the position\n4.Insert node in the end\n5.Delete node in the beginning\n6.Delete node in between\n7.Delete node in the end\n8.Traversing the linked list\n9.Searchimg a linked list\n");
printf("\nENter a choice\n");
scanf("%d",&a);
switch(a)
{
case 1:
	creation();
	break;
case 2:
	insbeg();
	break;
case 3:
	insbet();
	break;
case 4:
	insend();
	break;
case 5:
	delbeg();
	break;
case 6:
	delbet();
	break;
case 7:
	delend();
	break;
case 8:
	trav();
	break;
case 9:
	searching();
	break;
default:printf("Invalid choice\n");
}
}
while(a!=0);
}

