#include <stdio.h>

int main()
{
    char c1 = 2;
    char c2 = 5;

    printf("%c\n", c1 + 48);
    printf("%c\n", c2 + 48);

/*
 
c1에는 2, c2에는 5가 들어있습니다. 하지만 이 상태로 printf에서 %c로 출력하면 2와 5가 출력되지 않습니다. 따라서 정수 2와 5가 ASCII 코드표의 원하는 문자에 대응되도록 만들어주면 됩니다.

ASCII 코드표에서 문자 '0'이 시작하는 위치의 정숫값을 찾아보면 48입니다. 그러므로 각 숫자에 48을 더하면 %c로 숫자를 출력할 수 있습니다.

2 + 48 = 50이므로 문자 '2'가 됨
5 + 48 = 53이므로 문자 '5'가 됨

*/

    return 0;
}
