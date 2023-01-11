#include<stdio.h>
int a[100],n,i,max,min,add=0;
void maximum()
{
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("\nthe maximum number is %d\n",max);
}
void minimum()
{
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
min=a[i];
}
printf("\nthe minimum number is %d\n",min);
}
void sum()
{
add=0;
for(i=0;i<n;i++)
{
add=add+a[i];
}
printf("\nthe sum is %d\n",add);
}
void mean()
{float avg,x=0;

for(i=0;i<n;i++)
{
x=x+a[i];
}
avg=x/n;
printf("\nthe mean is %f\n",avg);
}
void count()
{int coun=0;
for(i=0;i<n;i++)
{
coun++;
}
printf("the count of array is %d",coun);
}
void main()
{
int c;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter data\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
do
{
printf("Enter the choice\n0.Exit\n 1.Maximum\n2.Minimum\n3.Sum\n4.Mean\n5.Count\n");
scanf("%d",&c);
switch(c)
{
case 1:maximum();
	break;
case 2:minimum();
	break;

case 3:sum();
	break;

case 4:mean();
	break;

case 5:count();
	break;

default: printf("Invalid choice\n");
		break;
}
}
while(c!=0);
}
