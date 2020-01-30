#include<stdio.h>
#include<stdlib.h>

int main()
{	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	
	int gcd(int a,int b)
	{
		if(a>b)
		{
			if(a==0)
				return b;
			if(b==0)
				return a;
			else
				return gcd(b,a%b);
		}
	}
	int ans = gcd(a,b);
	printf("the gcd of %d and %d is %d\n",a,b,ans);
}
