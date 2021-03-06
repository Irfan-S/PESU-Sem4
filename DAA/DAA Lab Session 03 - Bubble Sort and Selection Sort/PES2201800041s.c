#include "sort.h"
#include <stdlib.h>
#include <string.h>

int isSorted(int* a, int n){
	int i=0;
	for (i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			return 0;
		}
	}
	return 1;
}

void bubblePass(int *a, int n){
	int i,t;
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;	
		}
	}
}

//Implement Bubble sort using bubblePass() declared above.
void bubbleSort(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		bubblePass(a,n);
	}
}

//Find the minimum number of BubblePasses required to sort by Bubble sort
// algorithm. Note that a sorted array does not require any bubblePasses. 
//Use isSorted() function before calling BubblePass().
int numBubblePasses(int *a, int n){
	int min = isSorted(a,n);
	int i;
	int count=0;
	if(min){
		return 0;	
	}
	else{
		for(i=0;i<n;i++){
			if(isSorted(a,n)){
				return count;
			}
			else{
				count++;
				bubblePass(a,n);
			}	
		}	
	}
	return count;
}

//Find the offset (that is, index) of the maximum element in an array.
//In case of multiple occurrences of the maximum element,
// return the largest offset (that is, rightmost index).
int maxIndex(int *a, int n){
	if(isSorted(a,n)){
		return n-1;
	}else{
		int i,max;
		max = 0;
		for(i=0;i<n;i++){
			if(a[i]>=a[max]){
				max=i;
			}
		}
		return max;	
	}
}

//Consider an array a[0] to a[n-1].
//Let i be the largest offset of the maximum element in the array.
//Swap a[i] with a[n-1] only if i < n-1.
//Use maxIndex() declared above.
void swapWithMax(int *a, int n){
	int max = maxIndex(a,n);
	if(max<n-1){
		int t=a[n-1];
		a[n-1]=a[max];
		a[max]=t;
	}	
	
}

//Implement Selection sort using maxIndex() and swapWithMax() declared above.
void selectionSort(int *a, int n){
	int i;
	for(i=n;i>0;i--){
		if(isSorted(a,n))
		{
			return;
		}else{
			if((maxIndex(a,i)+1)!=i){
				swapWithMax(a,i);
			}	
		}	
	}
}

//Find the number of swaps in selectionSort() declared above.
int numSwaps(int *a, int n){
	int min = isSorted(a,n);
	int i;
	int count=0;
	if(min){
		return 0;	
	}
	else{
		for(i=n;i>0;i--){
			if(isSorted(a,n)){
				return count;
			}
			else{
				if((maxIndex(a,i)+1)!=i){
					count++;
				}
				swapWithMax(a,i);
			}	
		}	
	}
	return count;
}

