#include<unistd.h>

int fstrlen(char *s1)
{
    int i=0;
    while(s1[i])
    {
        i++;
    }
    return i;
}
void wdmatch(char *s1, char *s2)
{
    int i=0;
    int j=0;
    int l=0;
    
    while(s1[i])
    {
       while(s2[j])
       {
            if(s1[i] == s2[j])
            {
                l++;
                break;
            }
            j++;
       }
       i++;
    }
    if(l==fstrlen(s1))
    {
        l=0;
        while(s1[l])
        {
            write(1, &s1[l], 1);
            l++;
        }
    }
}
int main(int argc, char *argv[])
{
    if(argc==3)
        wdmatch(argv[1],argv[2]);
    write(1, "\n", 1);
    return 0;
}