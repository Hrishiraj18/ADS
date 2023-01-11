#include<stdio.h>
int marks [2][5],i,j,sum[2]={0},count=0;
float avgstud[2],avgsub[5],sumsub[5]={0};
void main()
{
int c;
for(i=0;i<2;i++)
{
	printf("Enter mark fo student %d:",i+1);
	for(j=0;j<5;j++)
		{
		scanf("%d",&marks[i][j]);
		}
}
//total sum
for(i=0;i<2;i++)
{
	for(j=0;j<5;j++)
		{
		sum[i]+=marks[i][j];
		}
}
//average of student
for(i=0;i<2;i++)
{
avgstud[i]=(float)sum[i]/5.0;
}
//average of sub
for(j=0;j<5;j++)
{
	for(i=0;i<2;i++)
	{sumsub[j]+=marks[i][j];}
avgsub[j]=sumsub[j]/2.0;
}
do
{
printf("\n0.Exit\n1.Average of students\n2.Average of subjects\n3.Count of students having average less than 50\n3.Display\n");

	scanf("%d",&c);
switch(c)
{
case 1:printf("average of student\n");
for(i=0;i<2;i++)
{printf("%f\n",avgstud[i]);}
break;
case 2:
printf("average of subject\n");
for(j=0;j<5;j++)
{printf("%f\n",avgsub[j]);}
break;
case 3:
for(i=0;i<2;i++)
{
if(avgstud[i]<50)
{count++;}
}
printf("NO of students less tha 50 is %d\n",count);
break;
case 4:
for(i=0;i<2;i++)
{	printf("student -%d",i+1);
	for(j=0;j<5;j++)
		{
		printf("Subject %d- %d\n",j+1,marks[i][j]);
		}
}
break;
default:
printf("Invalid choice\n");
break;
}
}
while(c!=0);
}





