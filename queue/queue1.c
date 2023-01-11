#include<stdio.h>
#define N 25
int Q[N],front=-1,rear=-1;
void enq()
{
int data;
printf("Enter data\n");
scanf("%d",&data);
if(rear==N-1)
{
printf("Queue ful\n");
}
else if (rear==-1&&front==-1)
{front=rear=0;
Q[rear]=data;
}
else{
rear++;
Q[rear]=data;
}
}
void deq()
{
if(front==-1&&rear==-1)
{printf("underflow/n");}
else if (front==rear)
{printf("%d is removed item\n",Q[front]);
front=rear=-1;}
else
{
printf("%d is removed item\n",Q[front]);
front++;
}
}
void topQ()
{
if(front==-1)
{printf("Queue empty\n");}
else
{printf("%d\n",Q[front]);}
}
void display()
{
int i;
if(front==-1)
{
printf("Queue empty\n");
}
for(i=front;i<=rear;i++)
{
printf("%d\t",Q[i]);
}
printf("\n");
}
void main()
{
int c;
do
{
printf("\nEnter the choice\n0.Exit\n 1.Enqueue\n2.Dequeue\n3.top\n4.display\n");
scanf("%d",&c);
switch(c)
{
case 1:enq();
	break;
case 2:deq();
	break;

case 3:topQ();
	break;

case 4:display();
	break;
default: printf("Invalid choice\n");
		break;
}
}
while(c!=0);
}

