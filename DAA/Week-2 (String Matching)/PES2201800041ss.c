#include<stdio.h>
#include<string.h>
#include "sm.h"

int searchFirstOccurrence(char *pattern, char *text){
    int i;
    int n=strlen(text);
    int m=strlen(pattern);
    for(i=0;i<=n-m;i++){
        int j=0;
        while((j<m)&&(pattern[j]==text[i+j]))
            j+=1;
        if(j==m)
            return i;
    }
    return -1;
}

int searchLastOccurrence(char *pattern, char *text){
    int i,pos=-1;
    int n=strlen(text);
    int m=strlen(pattern);
    for(i=0;i<=n-m;i++){
        int j=0;
        while((j<m)&&(pattern[j]==text[i+j]))
            j+=1;
        if(j==m)
            pos=i;
    }
    return pos;
}

int numOccurrences(char *pattern, char *text){
    int i,count=0;
    int n=strlen(text);
    int m=strlen(pattern);
    for(i=0;i<=n-m;i++){
        int j=0;
        while((j<m)&&(pattern[j]==text[i+j]))
            j+=1;
        if(j==m)
            count++;
    }
    return count;
}

int longestPrefix(char *pattern, char *text){
    int i;
    int count=0;
    int n=strlen(text);
    int m=strlen(pattern);
    for(i=0;i<=n-m;i++){
        int j=0,c=0;
        while((j<m)&&(pattern[j]==text[i+j])){
            j+=1;
            c++;
        }    
        if(c>count)
            count=c;
        if(j==m)
            break;
    }
    return count;
}

int charactersCompared(char *pattern, char *text){
    int j,i,c=0;
    int n=strlen(text);
    int m=strlen(pattern);
    for(i=0;i<=n-m;i++){
         j=0;
        while(j<m){
            c+=1;
            if(pattern[j]!=text[i+j])
                break;
            j++;
        }
    }
    return c;
}