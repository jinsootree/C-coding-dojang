#include <stdio.h>

int main()
{
    char c1 = 'a';
    char /*_____*/ num2 = c1;

    printf("%c\n", num2);

    return 0;
}
/*char는 정수 자료형이므로 char 또는 char보다 큰 정수 자료형에 저장할 수 있습니다.
따라서 num2는 char, short, int, long, long long이나
unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long으로
선언하면 됩니다.*/