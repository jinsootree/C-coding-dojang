#include <stdio.h>

int main()
{
    unsigned char num1; /*(1)________*/
    unsigned short num2; /*(2)________*/
    long long num3; /*(3)________*/

     num1 = 256;
     num2 = 65536;
     num3 = 9223372036854775808;

    printf("%u %u %lld\n", num1, num2, num3);

    return 0;
}
