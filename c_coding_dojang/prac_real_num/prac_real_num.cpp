#include <stdio.h>

int main()
{
    float/*(1)____*/ num1 = 1.97f;
    long double/*(2)____*/ num2 = 5.524218l;
    double/*(3)____*/ num3 = 3792.8e+4;

    printf("%f %Lf %f\n", num1, num2, num3);

    return 0;
}
/*�Ǽ� �ڷ������� ������ �����ϴ� �����Դϴ�. 
���⼭ �����ϴ� �Ǽ��� �� �ڿ� f�� �پ��ִٸ� float, 
l�� �پ��ִٸ� long double, 
�ƹ��͵� �پ����� �ʴٸ� double�Դϴ�.*/