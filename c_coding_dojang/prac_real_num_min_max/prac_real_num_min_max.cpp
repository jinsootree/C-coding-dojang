#include <stdio.h>
#include <float.h>/*(1)___________*/

int main()
{
    float num1 = FLT_MAX;
    double num2 = DBL_MAX/*(2)___*/;
    long double num3 = LDBL_MAX/*(3)___*/;

    printf("%.2f\n", num1);
    printf("%e\n", num2);
    printf("%Le\n", num3);

    return 0;
}
/*�ҽ� �ڵ��� FLT_MAX�� float.h ��� ���Ͽ� ���ǵǾ� �����Ƿ� 
#include <float.h>�� ���� ��� ������ �������ݴϴ�.
�׸��� double�� �ּڰ��� DBL_MIN,
long double�� �ִ��� LDBL_MAX�Դϴ�.*/