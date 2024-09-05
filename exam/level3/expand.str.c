int main(int argc, char *argv[]) //expand.str
{
    if(argc==2)
    {
        int i=0;
        int cont = 1;
        while(argv[1][i] == 32 || argv[1][i] == '\t')
        {
            i++;
        }
        while(argv[1][i])
        {
            cont=1;
            if(argv[1][i] != 32 && argv[1][i] != '\t')
            {
                write(1, &argv[1][i], 1);
                if(argv[1][i+1] == 32 || argv[1][i+1] == '\t')
                {
                    while (argv[1][i+1] == 32 || argv[1][i+1] == '\t')
                    {
                        i++;
                    }
                    while(cont<4)
                    {
                        if(argv[1][i+1] != '\0')
                            write(1, " ", 1);
                        cont++;
                    }
                    
                }
            }
            i++;    
        }
    }
    write(1, "\n", 1);
    return 0;
}