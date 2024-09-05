#include<stdlib.h>
#include<stdio.h>

int *ft_range(int start, int end)
{
    int *res;
    int i=0;
    int size;

    if(start>end)
        size=start-end+1;
    else if(start<end)
        size=end-start+1;
    else if(start==end)
        size=1;
    res = (int *)malloc(sizeof(int)*(size));
    if(res==NULL)
        return 0;
    if(start==end)
    {
        *res=start;
        return res;
    }
    if(start>end)
    {
        while(i<size)
        {
            res[i]=end;
            end++;
            i++;
        }
    }
    else if(start<end)
    {
         while(i<size)
        {
            res[i]=end;
            end--;
            i++;
        }
    }
    return res;

}

int main()
{
    int start=0;
    int end=0;
    int size;
    int i=0;
    int *tab;
    
    if(start>end)
        size=start-end+1;
    else if(start<end)
        size=end-start+1;
    else if(start==end)
        size=1;
    tab=ft_range(start,end);  

    while(i<size)
    {
        printf("%d ",tab[i]);
        i++;
    }
    return 0;

}