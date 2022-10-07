#include <stdio.h>

int main()
{
    short /*(1)___*/ num1;
    long long /*(2)___*/ num2;

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));
    //2+8+4
    return 0;
}
