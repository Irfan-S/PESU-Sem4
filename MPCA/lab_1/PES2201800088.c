int searchFirstOccurrence(int arr[], int n, int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int searchLastOccurrence(int arr[], int n, int key)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int numOccurrences(int arr[], int n, int key)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			c=c+1;
		}
	}
	return c;
}
