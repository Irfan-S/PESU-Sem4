#include<stdio.h>
#include<stdlib.h>
void sort1(int* a, int n)
{
	int i,j,t;
	//printf("%d",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
}
void insort( int* arr, int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}
void selecsort(int* a, int n)
{
	int i,j,t,min;
	//printf("%d",n);
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
			t=a[j];
			a[j]=a[min];
			a[min]=t;
	}
}

int main()
{
int a[5]={5,3,2,1,4};
int i;
//sort1(a);
insort(a,5);
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
return 0;
}


