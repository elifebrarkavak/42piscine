#include<stdio.h>
#include<string.h>

int check(const char *s1, char c)
{
    int i=0;
    while(s1[i])
    {
        if(s1[i] == c)
            return 1;
        i++;
    }
    return 0;
}
size_t	ft_strspn(const char *s, const char *accept)
{
    int i=0;
    while(s[i])
    {
        if(check(accept,s[i])==0)
            break;
        i++;
    }
    return i;
}
int main()
{
    const char s[]="elif ebrar kavak";
    const char accept[]="b";

    printf("%lu\n", ft_strspn(s,accept));
    printf("%lu", strspn(s,accept));
    return 0;
}