#include<unistd.h>


int check2(char *s2, char c)
{
    int k=0;
    while(s2[k])
    {
        if(s2[k] == c)
            return 0;
        k++;
    }
    return 1;
}

int check1(char *s1, char c, int l)
{
    int k=0;
    while(k<l)
    {
        if(s1[k] == c)
            return 0;
        k++;
    }
    return 1;
}

void ft_union(char *s1, char *s2)
{
    int i=0;
    while(s1[i])
    {
        if(check1(s1,s1[i],i) == 1) // s1 de daha önceki indekslerde bu eleman var mı kontrolü
        {
            write(1, &s1[i], 1);
        }
        i++;
    }
    i=0;
    //check1 tamamlandıktan sonra check2 ile //s2 de ki eleman s1 de yoksa yazdır
    while(s2[i])
    {
        if(check2(s1, s2[i])==1) //s2 de ki eleman s1 de yoksa yazdır
        {
           if(check1(s2,s2[i],i) == 1) // s2 de daha önceki indekslerde bu eleman var mı kontrolü
            {
                write(1, &s2[i], 1);
            }
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc==3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return 0;
}