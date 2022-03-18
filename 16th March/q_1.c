#include <stdio.h>
int main()
{
    int c, b, d;
    scanf("%d", &c);
    scanf("%x", &b);
    scanf("%o", &d);

    printf("Decimal = %d, Octal = %o, Hexa = %x\n", c, c, c);
    printf("Decimal = %d, Octal = %o, Hexa = %x\n", b, b, b);
    printf("Decimal = %d, Octal = %o, Hexa = %x\n", d, d, d);
    return 0;

}