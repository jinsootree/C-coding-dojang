#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;

    num1 = num1 / 100000000.0f /*___________*/;

    printf("%e\n", num1);

    return 0;
}
/*float�� �ּڰ��� FLT_MIN�� 0�� �Ǿ��ٸ� 
����÷ο찡 �߻��� ��Ȳ�Դϴ�. 
���� num1�� ū ���� ������ �˴ϴ�.*/