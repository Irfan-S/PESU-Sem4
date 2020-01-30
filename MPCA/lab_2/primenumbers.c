#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* prime(int a[],int n)
{
	int i;
	int j;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j+1]%i==0 && a[j+1]!=i)
			{	//printf("%d ",a[j+1]);
				a[j+1]=0;
			}
		}
		//printf("\n");
	}
	/*for(i=0;i<=n-2;i++)
	{
		printf("%d\n",a[i]);
	}*/
	return a;
}

int main()
{
	int n,i,j;
	int a[100];
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		a[i-2]=i;
	}
	/*for(i=0;i<=n-2;i++)
	{
		printf("%d\n",a[i]);
	}*/

	int* ans=prime(a,n);
	for(j=0;j<=n-2;j++)
	{	
		if(ans[j]!=0)
		 printf("%d\n",ans[j]);
	}

}
