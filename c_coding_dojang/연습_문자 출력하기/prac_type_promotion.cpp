#include <stdio.h>

int main()
{
    char c1 = 'a';
    char /*_____*/ num2 = c1;

    printf("%c\n", num2);

    return 0;
}
/*char�� ���� �ڷ����̹Ƿ� char �Ǵ� char���� ū ���� �ڷ����� ������ �� �ֽ��ϴ�.
���� num2�� char, short, int, long, long long�̳�
unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long����
�����ϸ� �˴ϴ�.*/