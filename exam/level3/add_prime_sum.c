#include<unistd.h>
#include<stdlib.h>

int ft_atoi(char *s1)
{
    int i=0;
    int  res=0;
    if(s1[0] == '-')
        return -1;
    while(s1[i])
    {
        res = res * 10 + (s1[i] - '0');
        i++;
    }
    return res;
}
int prime(int nb)
{
    int i=2;
    while(i<nb)
    {
        if(nb%i == 0)
            return 0;
        i++;
    }
    return 1;
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void putnbr(int nb)
{
    if(nb==-2147483648)
        write(1, "-2147483648", 1);
    else if(nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
        putnbr(nb);
    }
    else if(nb > 9)
    {
        putnbr(nb/10);
        putnbr(nb%10);
    }
    else
    {
        ft_putchar(nb+'0');
    }
}
int main(int argc, char *argv[])
{
    if(argc==2)
    {
        int i=0;
        int j=2;
        int cont;
        int res=0;
        cont = ft_atoi(argv[1]);

        if(cont<0)
        {
            write(1, "0", 1);
        }

        else
        {
            while(j<=cont)
            {
                if(prime(j) == 1)
                    res += j;
                j++;
            }
            putnbr(res);
        }
        write(1, "\n", 1);
    }   
    else if(argc != 2)
        write(1, "0\n", 2);
    
    return 0;
}