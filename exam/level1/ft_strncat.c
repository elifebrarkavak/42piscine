#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i=0;
    unsigned int j=0;
    unsigned int k=0;

    while(dest[i])
    {
        i++;
    }

    while(src[j] && k<nb)
    {
        dest[i+j]=src[j];
        j++;
        k++;
    }
    dest[i+j]='\0';

    return (dest);

}

int main()
{
    char dest[]="ebrar";
    char src[]="elif";

    printf("%s", ft_strncat(dest,src,2));
}