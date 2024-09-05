unsigned char swap_bits(unsigned char o)
{
    return ((o>>4) | (o<<4));
}