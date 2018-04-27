#include <stdio.h>
int bitt(int num, int bit);
int main(void)
{
    int num, bit;
    puts("Пиши значение: ");
    scanf("%d", &num);
    puts("Пиши позицию бита: ");
    scanf("%d", &bit);
    printf("Результат %d \r\n ", bitt(num, bit));
    return 0;
    
}
int bitt(int num, int bit)
{
    int mask = 1;
    mask <<= bit;
    return(num & mask);
    
}