#include <stdio.h>
int obch(char *dec);
int main(void)
{
    char *dec = "10101010";
    printf("%s is %d\r\n", dec, obch(dec));
    return 0;
    
}
int obch(char *dec)
{
    int dec1 = 0;
    while(*dec != '\0')
    dec1 = (dec1 << 1) + *dec++ - '0';
    return dec1;
    
}