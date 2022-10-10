#include <stdio.h>

int main()
{
    printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647LL, 4.528172L);/*_________________________*/

    return 0;
}
/*"%s %o %lld %Lf\n"에서 서식 지정자 부분을 완성하여
Hello, world! 76 -2147483647 4.528172를 출력해야 합니다.
여기서는 %s가 문자열이고 리터럴 "Hello, world!", %o는 8진 정수이므로
리터럴 076, %lld는 long long 크기이므로 리터럴 -2147483647LL,
%Lf는 long double 크기이므로 리터럴 4.528172L을 차례대로 넣어주면 됩니다.*/
