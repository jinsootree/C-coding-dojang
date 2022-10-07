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
부호 있는 정수의 최댓값을 출력하는 문제입니다. 
소스 코드의 CHAR_MAX, INT_MAX 등은 limits.h 헤더 파일에 정의되어 있으므로
#include <limits.h>와 같이 헤더 파일을 포함해줍니다.
그리고 short의 최댓값은 SHRT_MAX, long long의 최댓값은 LLONG_MAX입니다. 
*/