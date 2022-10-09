#include <stdio.h>

int main()
{
    double/*(1)_*/ num1 = 0.4284;
    float/*(2)_*/ num2 = 2.7f;

    printf("num1의 크기: %d, num2의 크기: %d\n", sizeof(num1), sizeof(num2));

    return 0;
}
/*sizeof로 변수의 자료형 크기를 구하고 있습니다. 
여기서 8이 나오려면 num1을 double로 선언하고, 
4가 나오려면 float로 선언하면 됩니다.*/