#include <stdio.h>
#include <float.h>

int main()
{
    double doubleMin;
    double doubleMax;
    long double longDoubleMin;
    long double longDoubleMax;

    doubleMin = DBL_MIN;
    doubleMax = DBL_MAX;
    longDoubleMin = LDBL_MIN;
    longDoubleMax = LDBL_MAX;
    /*______________________
    ________________________
    ________________________
    ______________________*/

    printf("%e %e\n", doubleMin, doubleMax);
    printf("%Le %Le\n", longDoubleMin, longDoubleMax);

    return 0;
}
/*float.h ��� ������ ���ԵǾ� �����Ƿ� 
�ּڰ��� �ִ��� 
������ �Է����� �ʰ� 
�̸� ���ǵ� ���� ����մϴ�. 
double�� �ּڰ��� �ִ��� DBL_MIN, DBL_MAX, 
long double�� �ִ��� LDBL_MIN, LDBL_MAX�Դϴ�.*/