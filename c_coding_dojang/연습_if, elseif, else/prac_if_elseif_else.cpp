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
/*if, else if 조건문으로 변수 c1에 저장된 문자가 a, b, c, d인지 검사하고 있습니다.
c가 출력되려면 변수 c1에 문자 'c' 또는 c의 ASCII 코드 값 99를 저장하면 됩니다.*/