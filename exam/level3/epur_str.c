#include<unistd.h>

int main(int argc, char *argv[])
{
    int i=0;
    char c=32;
    int cont=0;
    if(argc==2)
    {
        while(argv[1][i] == 32 || argv[1][i] == '\t')
        {
            i++;
        }
        while(argv[1][i])
        {
            if(argv[1][i] == 32 || argv[1][i] == '\t')
            {
                cont=1;
            }
            if(!(argv[1][i] == 32 || argv[1][i] == '\t'))
            {
                if(cont==1) 
                {
                    write(1,&c,1);
                }
                write(1, &argv[1][i], 1);
                cont=0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}