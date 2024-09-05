#include<unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i=0;
    int j=0;
    int k=0;
    if(argc != 4)
    {
        write(1, "\n",1);
        return 0;
    }
    while(argv[2][j])
    {
        j++;
    }
    while(argv[2][k])
    {
        k++;
    }
    if(j == 1 && k == 1)
    { 
            while(argv[1][i])
            {
                if(argv[1][i]==argv[2][0])
                {
                    argv[1][i]=argv[3][0];
                }
                write(1,&argv[1][i],1);
                i++;
            }
            write(1, "\n",1);
    }
    else
    {
        write(1, "\n", 1);
    }
    return 0;
}