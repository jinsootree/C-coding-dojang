#include <stdio.h>

int main()
{
    double/*(1)_*/ num1 = 0.4284;
    float/*(2)_*/ num2 = 2.7f;

    printf("num1�� ũ��: %d, num2�� ũ��: %d\n", sizeof(num1), sizeof(num2));

    return 0;
}
/*sizeof�� ������ �ڷ��� ũ�⸦ ���ϰ� �ֽ��ϴ�. 
���⼭ 8�� �������� num1�� double�� �����ϰ�, 
4�� �������� float�� �����ϸ� �˴ϴ�.*/