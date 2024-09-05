#include<stdio.h>

char *ft_strncpy(char *dest,char *src, unsigned int n)
{
    unsigned int i=0;

    while(dest[i] && src[i] && i<n)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return dest;

}

int main()
{
    char dest[]="ebrar";
    char src[]="elif";

    printf("%s", ft_strncpy(dest,src,3));
}