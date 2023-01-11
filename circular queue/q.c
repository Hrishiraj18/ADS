    #include <stdio.h>
    # define N 5
    int q[N],front=-1,rear=-1;

    void enqueue()
{
	int x;
	printf("Enter the element to be inserted\n");
	scanf("%d",&x);

        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
            q[rear]=x;
        }
        else if((front==0&&rear==N-1)||(rear==(front-1)%N))
        {
            printf("QUEUE OVERFLOW\n");
        }
       /* else if(rear==N-1&&front!=0)
        {
            rear=0;
            q[rear]=x;
        }*/
        else
        {
            rear=(rear+1)%N;
            q[rear]=x;
        }
	    printf("element added successfully\n");
    }

    int dequeue()
    {
        if(front==-1 && rear==-1)
        {
            printf("QUEUE UNDERFLOW\n");
        }
     else if(front==rear)
    {
       printf("\nThe element is %d", q[front]);
       front=-1;
       rear=-1;
    }
    else if(front==N-1)
    {
        printf("The element is %d",q[front]);

    front=0;
    }
    else
    {
        printf("\nThe dequeued element is %d", q[front]);
       front=(front+1)%N;
    }
	printf("Element removed successfully\n");
    }
    void display()
    {
           if (front==-1)
    {
        printf("The queue is empty\n");
    }
    printf("The elements in the circular queue are :");
    if(front<=rear)
    {

        for(int i=front;i<=rear;i++)
        {
            printf("%d \t",q[i]);
        }
    }
    else
    {
        for(int i=front;i<N;i++)
            printf("%d",q[i]);
        for(int i=0;i<=rear;i++)
            printf("%d",q[i]);
    }
    }
void main()
{int c;
do
{
printf("\nEnter the choice\n0.Exit\n 1.Enqueue\n2.Dequeue\n3.display\n");
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

