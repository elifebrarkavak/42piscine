#include<unistd.h>

int main(int argc, char *argv[])
{
    int i=0;
    int k=0;
    int start=0;
    if(argc==2)
    {
        while(argv[1][i])
        {
            i++;
        }
        i--;
 
        while(argv[1][i] &&  i>= 0 && (argv[1][i] == 32 || argv[1][i] == '\t'))
        {
            i--;
        }     
        start=i;

        while(start >= 0 && !(argv[1][start] == 32 || argv[1][start] == '\t'))
        {
            start--;
        }
        start++;
        while(i>=start)
        {
            write(1, &argv[1][start], 1);
            start++;
        }

    }
    write(1, "\n", 1);
    return 0;
}