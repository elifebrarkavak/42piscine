#include<unistd.h>

void print_bits(unsigned char o)
{
    int i=0;
    unsigned char bit;
    while(i--)
    {
        bit=(o>>i & 1) + '0';
        write(1, &bit, 1);
    }
}