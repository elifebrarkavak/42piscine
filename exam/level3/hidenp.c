#include<unistd.h>

int hide(char *s1, char *s2)
{
    int i=0;
    int j=0;
    int cont=0;
    while(s2[i])
    {
        if(s2[i]==s1[j])
        {
            j++;
            cont++;
        }
        i++;
    }
    i=0;
    while(s1[i])
    {
        i++;
    }
    if(i==cont || i==0)
    {
        return 1;
    }
    else
        return 0;
}
int main(int argc, char *argv[])
{
    int res;
    if(argc==3)
    {
        res=hide(argv[1],argv[2]);
        if(res==1)
        {
            write(1, "1", 1);
        }
        else if(res==0)
        {
            write(1, "0", 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}