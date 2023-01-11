#include<stdio.h>
#define N 50
int top=-1,stack[N];
void push()
{
int number;
printf("enter the element\n");
scanf("%d",&number);
if(top==N-1)
{printf("overflow");}
else 
{
top++;
stack[top]=number;
}
}
void pop()
{
int number;
if(top==-1)
{printf("underflow");}
else 
{
number=stack[top];
top--;
printf("%d,popped value\n",number);
}
}
void topstack()
{
if(top==-1)
{printf("stack empty\n");}
else
{printf("%d\n",stack[top]);}
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
void main()
{
int c;
do
{
printf("Enter the choice\n0.Exit\n 1.push\n2.pop\n3.top\n4.display\n");
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
