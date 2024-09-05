unsigned char reverse_bits(unsigned char o)
{
    int i=8;
    unsigned char res=0;

    while (i>0)
    {
        res = res * 2 + (o % 2);
        o = o / 2;
        i--;
    }
    return res;
    
}