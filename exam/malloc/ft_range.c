#include<stdlib.h>

int *ft_range(int start, int end)
{
    int size;
    int *res;
    int i=0;

    if(start>end)
        size=start-end+1;
    else if(end>start)
        size=end-start+1;
    else if(end==start)
        size = 1;

    res =(int *)malloc(sizeof(int)*size);
    while(i<size)
    {
        res[i]=start;
        start--;
        i++;
    }
    return res;
}
#include<stdio.h>
int main()
{
    int start=0;
    int end=-3;
    int size;
    int *res;
    int i=0;
    if(start>end)
        size=start-end+1;
    else if(end>start)
        size=end-start+1;
    else if(end==start)
        size = 1;
    res=ft_range(start,end);

    while(i<size)
    {
        printf("%d ",res[i]);
        i++;
    }
    return 0;
}