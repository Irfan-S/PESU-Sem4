// Header file for travelling salesman problem
#include "tsp.h"
//Finds a solution for the traveling salesman problem
//Returns the cost of a min-cost Hamiltonian circuit of the given
//directed complete graph with n vertices in the form a cost matrix.
int tsp(int n, int graph[][n]){
	int mincost,cost;
	mincost=9999;
	int i;
	int perm[n];
	for(i=0;i<n;i++)
	{
		perm[i]=i;
	}
	do
	{
		cost=getCost(n,graph,perm);	
		if(cost<mincost)
		mincost=cost;
	}
	while(get_next_permutation(perm,n));
return mincost;
}

// Returns an array of size n, 
// starting at city_0 (that is the first node) 
// traversing the path with min-cost
// Note: Return the path which is lexicographically smaller in case two paths have the same cost
int* printPath(int n, int graph[][n]){
    int perm[n], i;
    int* MinPerm = (int*)malloc(sizeof(int)*n);
    for (i = 0; i < n; i++)
    {
        perm[i] = i;
    }

    int Mincost = getCost(n,graph,perm);
    int cost = Mincost;
    for(i =0;i<n;i++){
        MinPerm[i]=perm[i];
    }
    while(get_next_permutation(perm,n)){
        cost = getCost(n,graph,perm);
        if( cost < Mincost){
            Mincost = cost;
            for(i=0;i<n;i++){
                MinPerm[i] = perm[i];
            }
        }
    }
    return MinPerm;
}

// Given a permutation of path - P[], 
// Return the cost from the starting city through the path and back
// P[0] -> P[1] -> ... -> P[n-1] -> P[0]
int getCost(int n, int graph[][n], int *P){
	int cost = 0, i;
    for(i=0;i<n-1;i++){
        cost += graph[P[i]][P[i+1]];
    }
    cost += graph[P[n-1]][P[0]];
    return cost;
}


