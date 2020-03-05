#include<stdio.h>
#include"mergeSort.h"

void insertionSort(int *a, int start, int end)
{
	int i,value,empty;
	for(i=start;i<end;i++)
	{
		value=a[i];
		empty=i;
		while(empty>0 && a[empty-1]>value)
		{
		a[empty]=a[empty-1];
		empty=empty-1;
		}
	a[empty]=value;
	}
}

void mergeSortedHalfs(int *a, int start, int mid, int end)
{
	//int c[10];
	//int n;
	int i = start;
	int j = mid+1;
	int k = start;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			a[k]=a[i];
			i++;
			k++;
		}
		else
		{
			a[k]=a[j];
			j++;
			k++;
		}
       }
	while(i<=mid)
	{
	 a[k]=a[i];
	 i++;	
	 k++;
	}
	while(j<=end)
	{
	 a[k]=a[j];
	 j++;
	 k++;
	}
	
}
void mergeSort(int *a, int start, int end)
{
 
   int mid=(start+end)/2;
	if(start>end || start==end)
	return;
	
   mergeSort(a,start,mid);
   mergeSort(a,mid+1,end);
   mergeSortedHalfs(a,start,mid,end);

}

void selectiveMergeSort(int *a, int start, int end, int parameter)
{
	int n=end-start;
	if(n>parameter)
	{
	mergeSort(a,start,end);
	}
	else
	insertionSort(a,start,end);
}


