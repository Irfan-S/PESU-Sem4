#include<stdio.h>
#include "graphSearch.h"

void dfs(int n, const int graph[][n], int i, int* visited, int p, bool* flag)
{
	visited[i] = 1;
	int j = 0;
	for(j = 0; j < n; j++)
	{
		if(graph[i][j] && visited[j] && j != p)
		{
			*flag = false;
		}
		if(graph[i][j] && !visited[j])
		{
			dfs(n, graph, j, visited, i, flag);
		}
	}
}

bool isTree(int n, const int graph[][n])
{
	int visited[1000];
	bool flag = true;
	int i = 0;
	for(i = 0; i < n; i++)
	{
		visited[i] = 0;
	}
	for(i = 0; i < n; i++)
	{
		if(!visited[i])
		{
			dfs(n, graph, i, visited, i, &flag);
		}
	}
	return flag;
}

void dfs1(int n, const int graph[][n], int i, int* visited, int* count, int k)
{
	visited[i] = 1;
	(*count)++;
	int j;
	for(j = 0 ; j < n; j++)
	{
		if(graph[i][j] && !visited[j] && abs(i - j) <= k)
		{
			dfs1(n, graph, j, visited, count, k);
		}
	}
}

Result pepesAnswers(int n, const int safeSeq[][n])
{
	Result a;
	a.numDeliveryFrogs = 0;
	a.maxHouses = 0;
	int count = 0;
	int visited[1000];
	int i = 0;
	for(i = 0; i < n; i++)
	{
		visited[i] = 0;
	}
	for(i = 0; i < n; i++)
	{
		if(!visited[i])
		{
			count = 0;
			dfs1(n, safeSeq, i, visited, &count, n);
			a.numDeliveryFrogs++;
			if(count > a.maxHouses)
			{
				a.maxHouses = count;
			}
		}
	}
	return a;
}

Result pepesAnswersWithK(int n, const int safeSeq[][n], int k)
{
	Result a;
	a.numDeliveryFrogs = 0;
	a.maxHouses = 0;
	int count = 0;
	int visited[1000];
	int i = 0;
	for(i = 0; i < n; i++)
	{
		visited[i] = 0;
	}
	for(i = 0; i < n; i++)
	{
		if(!visited[i])
		{
			count = 0;
			dfs1(n, safeSeq, i, visited, &count, k);
			a.numDeliveryFrogs++;
			if(count > a.maxHouses)
			{
				a.maxHouses = count;
			}
		}
	}
	return a;
}
