char *lowcase(char *s2)
{
    int i=0;
    while(s2[i])
    {
        if(s2[i]>='A' && s2[i]<= 'Z')
            s2[i] += 32;
        i++;
    }
    return s2;
}
void str_capitalizer(char *s1)
{
    int i=0;
    char *s2=lowcase(s1);
    while(s2[i])
    {
        if(s2[0] >= 'a' && s2[0] <= 'z')
        {
            s2[0] -= 32;
        }
        else if((s2[i-1] == 32 || s2[i-1] == '\t') && s2[i] >= 'a' && s2[i] <= 'z')
        {
            s2[i] -= 32;
        }
        write(1, &s2[i], 1);
        i++;
    }
}
int main(int argc, char *argv[])
{
    if(argc>1)
    {
        int i=1;
        while(i<argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}