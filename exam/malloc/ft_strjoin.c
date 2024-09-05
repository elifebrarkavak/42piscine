#include<stdlib.h>

int ft_strlen(char **strs, int size)
{
    int i=0;
    int j=0;
    int total=0;
    while(i<size)
    {
        j=0;
        while(strs[i][j])
        {
            j++;
            total++;
        }
        i++;
    }
    return total;
}
int  seplen(char *sep)
{
    int i=0;
    while(sep[i])
    {
        i++;
    }
    return i;
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i=0;
    int j=0;
    int k=0;
    int total=0;
    char *res;

    total=ft_strlen(strs,size)+seplen(sep);
    res=(char *)malloc(sizeof(char)*(total+1));
    if(!res)
        return NULL;
    while(i<size)
    {
        j=0;
        while(strs[i][j])
        {
            res[k] = strs[i][j];
            j++;
            k++;
        }
        j=0;
        while(sep[j] && i != size -1)
        {
            res[k]=sep[j];
            j++;
            k++;
        }
        i++;
    }
    return res;
}
#include<stdio.h>
int main()
{
    char *strs[4];
    strs[0]="elif";
    strs[1]="ebrar";
    strs[2]="kavak";
    strs[3]="42";
    

    printf("%s", ft_strjoin(4,strs,", "));
    return 0;
}