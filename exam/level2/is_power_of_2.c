#include<stdio.h>

int is_power_of_2(unsigned int n)
{
    unsigned int i=2;
    unsigned int j=1;

    while(i*j<=n)
    {
        if(i*j==n)
            return 1;
        j *= 2;
    }
    return 0;
}
int main()
{
    printf("%d ",is_power_of_2(5));
    printf("%d ",is_power_of_2(8));
    printf("%d ",is_power_of_2(78));
    printf("%d ",is_power_of_2(32));
}