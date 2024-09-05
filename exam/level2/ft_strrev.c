#include<stdio.h>

char *ft_strrev(char *str)
{
    int i=0;
    int j=0;
    int k;

    while(str[i])
    {
        i++;
    }
    char array[i];
    k=i;

    while(j<k)
    {
        array[j]=str[i-1];
        j++;
        i--;
    }
    str=array;

    return str;
}

int main()
{
    char str[]="ebrar";
    printf("%s", ft_strrev(str));
    return 0;
}