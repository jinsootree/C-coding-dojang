#include <stdio.h>
#include <limits.h> /*(1)____________*/

int main()
{
    char num1 = CHAR_MAX;
    short num2 = SHRT_MAX/*(2)____*/;
    int num3 = INT_MAX;
    long num4 = LONG_MAX;
    long long num5 = LLONG_MAX/*(3)_____*/;

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    return 0;
}

/*
��ȣ �ִ� ������ �ִ��� ����ϴ� �����Դϴ�. 
�ҽ� �ڵ��� CHAR_MAX, INT_MAX ���� limits.h ��� ���Ͽ� ���ǵǾ� �����Ƿ�
#include <limits.h>�� ���� ��� ������ �������ݴϴ�.
�׸��� short�� �ִ��� SHRT_MAX, long long�� �ִ��� LLONG_MAX�Դϴ�. 
*/