#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = -FLT_MAX; /*______*/;

    num1 = num1 * 1000.0f;

    printf("%f\n", num1);

    return 0;
}
/*float�� ���� num1�� 1000.0f�� ���Ͽ� 
�����÷ο찡 �߻��߰�
-inf�� ��µǾ����ϴ�.

�̶� ���� ���Ѵ��� -inf�� �Ƿ���
float�� �ִ��� FLT_MAX�� -�� �ٿ���
������ ������ָ� �˴ϴ�.*/