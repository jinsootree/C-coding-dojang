#include <stdio.h>

int main()
{
    char c1 = 'c';

    if (c1 == 'a')
        printf("a\n");
    else if (c1 == 'b')
        printf("b\n");
    else if (c1 == 'c')
        printf("c\n");
    else if (c1 == 'd')
        printf("d\n");
    else
        printf("x\n");

    return 0;
}
/*if, else if ���ǹ����� ���� c1�� ����� ���ڰ� a, b, c, d���� �˻��ϰ� �ֽ��ϴ�.
c�� ��µǷ��� ���� c1�� ���� 'c' �Ǵ� c�� ASCII �ڵ� �� 99�� �����ϸ� �˴ϴ�.*/