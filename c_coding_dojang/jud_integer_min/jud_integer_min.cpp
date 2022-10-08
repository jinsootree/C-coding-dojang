#include <stdio.h>
#include <limits.h> /*_______________*/

int main()
{
    char num1 = CHAR_MIN;
    unsigned short num2 = 0;
    int num3 = INT_MIN;
    unsigned long num4 = 0;
    long long num5 = LLONG_MIN;

    printf("%d %u %d %lu %lld\n", num1, num2, num3, num4, num5);

    return 0;
}
/*부호 있는 정수의 최솟값을 출력하는 문제입니다. 
소스 코드의 CHAR_MIN, INT_MIN, LLONG_MIN은 limits.h 헤더 파일에
정의되어 있으므로 #include <limits.h>와 같이 헤더 파일을 포함해주면 됩니다.

여기서 #include <limit.h>처럼 limits.h에서 s를 빠뜨리면 안 됩니다
(한 글자라도 틀리면 컴파일이 되지 않으므로 주의해야 합니다).*/
