#include<unistd.h>

int main(int argc, char *argv[])
{
    int i=0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i]>='a' && argv[1][i] <= 'z')
            {
                argv[1][i] = 'z' - (argv[1][i] - 'a');
            }
            else if(argv[1][i]>='A' && argv[1][i] <= 'Z')
            {
                argv[1][i] = 'Z' - (argv[1][i] - 'A');
            }

            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

//another way
/*#include<unistd.h>

int main(int argc, char *argv[])
{
    int i=0;

    char alf1[]="zyxwvutsrqponmlkjihgfedcba";
    char alf2[]="ZYXWVUTSRQPONMLKJIHGFEDCBA";//ters çevir


    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                char little = 'a';
                int nbr=0;
                while(argv[1][i] != little)
                {
                    little++;
                    nbr++;
                }
                argv[1][i]=alf1[nbr];
                write(1, &argv[1][i], 1);

            }
            else if(argv[1][i] =='a')
            {
                argv[1][i]='z';
                write(1, &argv[1][i], 1);
            }
            else if(argv[1][i] =='z')
            {
                argv[1][i]='a';
                write(1, &argv[1][i], 1);
            }
            else if(argv[1][i] > 'A' && argv[1][i] < 'Z')
            {
                char big = 'A';
                int nbr1=0;
                while(argv[1][i] != big)
                {
                    big++;
                    nbr1++;
                }
                
                argv[1][i]=alf2[nbr1];
                write(1, &argv[1][i], 1);
            }
            else if(argv[1][i] =='A')
            {
                argv[1][i]='Z';
                write(1, &argv[1][i], 1);
            }
            else if(argv[1][i] =='Z')
            {
                argv[1][i]='A';
                write(1, &argv[1][i], 1);
            }
            else
                write(1, &argv[1][i],1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}*/