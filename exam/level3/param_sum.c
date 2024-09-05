void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int res)
{
    if(res<10)
    {
        ft_putchar(res+'0');
    }
    else
    {
        ft_putnbr(res/10);
        ft_putnbr(res%10);
    }
}
int main(int argc, char *argv[])
{
    (void)argv;
    if(argc>1)
    {
        int res=argc-1;
        ft_putnbr(res);
    }
    write(1, "\n", 1);
}