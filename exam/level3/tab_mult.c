int ft_atoi(char *s1)
{
    int res=0;
    int i=0;
    if(s1[i]=='-')
        return res;
    while(s1[i])
    {
        res = res * 10 + (s1[i] - '0');
        i++;
    }
    return res;

}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void putnbr(int res)
{
    if(res>9)
    {
        putnbr(res/10);
        putnbr(res%10);
    }
    else if(res<=9 && res>=0)
        ft_putchar(res+'0');
}
void tab_mult(char *s1)
{
    int res=ft_atoi(s1);
    int i=1;
    int cont=0;
    char c='1';
    while(i<=9)
    {
        cont = 0;
        write(1, &c, 1);
        write(1, " x ", 3);
        c++;
        putnbr(res);
        cont = res * i;
        write(1, " = ", 3);
        putnbr(cont);
        if(i!=9)
        {
            write(1, "\n", 1);
        }
        i++;
    }
}
int main(int argc, char *argv[])
{
    if(argc==2)
    {
        tab_mult(argv[1]);
    }

    write(1, "\n", 1);
    return 0;
}