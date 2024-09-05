#include<stdio.h>
#include<stdlib.h>

int ft_atoi(const char *str)
{
    int i=0;
    int sign = 1;
    int res=0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
         i++;
    }
   
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10  + (str[i] - '0');
        i++;
    }
    return sign * res;

}

int main()
{
    const char str1[] = "   +987xyz";
    const char str2[] = "   -42abc123";
    const char str3[] = "   0";
    const char str4[] = "   2147483647"; // INT_MAX
    const char str5[] = "   -2147483648"; // INT_MIN
    const char str6[] = "   +00123";
    const char str7[] = "   --123"; // Geçersiz format
    const char str8[] = "   +++456"; // Geçersiz format
    const char str9[] = "   12 34";  // Boşluklar içeriyor

    // String'lerin sonuçlarını ft_atoi ve atoi fonksiyonlarıyla karşılaştırma
    printf("String: '%s'\n", str1);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str1), atoi(str1));

    printf("String: '%s'\n", str2);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str2), atoi(str2));

    printf("String: '%s'\n", str3);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str3), atoi(str3));

    printf("String: '%s'\n", str4);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str4), atoi(str4));

    printf("String: '%s'\n", str5);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str5), atoi(str5));

    printf("String: '%s'\n", str6);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str6), atoi(str6));

    printf("String: '%s'\n", str7);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str7), atoi(str7));

    printf("String: '%s'\n", str8);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str8), atoi(str8));

    printf("String: '%s'\n", str9);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str9), atoi(str9));

    return 0;
}