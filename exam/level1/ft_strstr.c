#include<stdio.h>

char *ft_strstr(char *str,char *to_find)
{
    int i=0;
    int j;
    while(str[i])
    {
        j=0;
        if(str[i]==to_find[j])
        {
            while(to_find[j])
            {
                if(str[i+j]==to_find[j])
                {
                    if(to_find[j+1]=='\0')
                    {
                        return (&str[i]);
                    }
                }
                j++;

            }
            
        }
        i++;
    }
    return str;
}
int main()
{
    char str[]="elifk ebrar kavak beyza karadag";
    char to_find[]="kavak";

    printf("%s", ft_strstr(str,to_find));
}