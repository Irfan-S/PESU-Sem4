#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int match(char c[],char s[])
{
	int wlen = sizeof(c);
	int slen = sizeof(s);
	int i,j,k;
	for(i=0;i<wlen-slen;i++)
	{
		for(j=0;j<slen;j++)
		{	k=i;
			while(c[k]==s[j])
			{
				printf("%c %c",c[k],s[j]);
				k=i+1;
			}		
			if(k==sizeof(s))
				return i;
			else
				return 999;
		}
	}
}

int main()
{	char c[100],s[100];
	printf("enter a string\n");
	scanf("%s",c);
	printf("enter a substring\n");
	scanf("%s",s);
	int shift = match(c,s);
	printf("%d",shift);
}
