#include <unistd.h>

int main()
{
    int a=100;
    int i = 1;
    
    char d;
    char b;

    while(i<=a)
    {
        if((i%3)==0)
        {
            if((i%5 == 0))
            {
                write(1, "fizzbuzz", 8);
            }
            else
            {
               write(1, "fizz", 4); 
            }
            
        }
        else if((i%5)==0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            if(i > 9)
            {
                d=(i/10) + '0';
                b=(i%10) + '0';
                write(1, &d, 1);
                write(1, &b, 1);
            }
            else
            {
                d = i + '0';
                write(1, &d, 1);
            }
        }
        write(1, "\n", 1);
        i++;
    }
    return 0;
}