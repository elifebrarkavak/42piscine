#include<stdio.h>

/*int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i=0;
    
    while(s1[i] && s2[i] && i<n-1)
    {
        if(s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return 0;
}*/

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i=0;
    while(s1[i] && s2[i] && s1[i]==s2[i] && i<n)
    {
        i++;
    }
    return (s1[i]-s2[i]);
}

int main()
{
    char s1[]="elifbbrar";
    char s2[]="elifabrar";

    printf("%d",ft_strncmp(s1,s2,5));
}