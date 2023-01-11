#include<stdio.h>
void merge(int a[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;


	int L[n1],R[n2];

	for(int i=0;i<n1;i++)
	{
	   L[i]=a[p+i];
	}
	for(int j=0;j<n2;j++)
	{
	   R[j]=a[q+1+j];
	}
	
int i,j,k;
i=0;
j=0;
k=p;
	
while(i<n1&&j<n2)
{
	if(L[i]<=R[j])
	{
	a[k]=L[i];
	i++;
	}
	else
	{
	a[k]=R[j];
	j++;
	}
	k++;
}

while(i<n1)
{	
	a[k]=L[i];
	i++;
	k++;
}			


while(j<n2)
{	
	a[k]=R[j];
	j++;
	k++;
}			
}

void mergesort(int a[],int left,int right)
{
	if(left<right)
{
	int middle=left+(right-left)/2;
	mergesort(a,left,middle);
	mergesort(a,middle+1,right);

	merge(a,left,middle,right);
}
}
void print(int a[],int size)
{
for(int i=0;i<size;i++)
printf("%d\t",a[i]);
printf("\n");
}

int main()
{
int n;
int a[50];
printf("enter the size of array");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
  mergesort(a, 0, n-1);
  printf("Sorted array: \n");
  print(a,n);
}

