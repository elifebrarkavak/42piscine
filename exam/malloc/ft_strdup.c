#include<stdlib.h>
#include<stdio.h>

char *ft_strdup(char *src)
{
    int i=0;
    char *res;
    while(src[i])
    {
        i++;
    }
    int size=i;
    res = (char *)malloc(sizeof(char)*(i+1));
    if(res==NULL)
        return NULL;
    i=0;
    while(i<size)
    {
        res[i]=src[i];
        i++;
    }
    return res;
    
}
int main()
{
    char dest[]="elif ebrar kavak";
    printf("%s",ft_strdup(dest));    
}