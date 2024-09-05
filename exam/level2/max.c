#include<stdio.h>

int max(int *tab, unsigned int len)
{
    unsigned int i=0;
    unsigned int j=0;
    int tmp;
    if(len == 0)
    return 0;
    while (i<len)
    {
        j=0;
        while(j<len-1)
        {
            if(tab[j]>tab[j+1])
            {
                tmp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=tmp;
            }
            j++;
        }
        i++;
    }
    return (tab[j]);
    
}
int main()
{
    int tab[]={1,8,5,17,3,9,10};
    unsigned int len=7;
    printf("%d",max(tab,len));
    return 0;
}