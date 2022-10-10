#include <stdio.h>

int main()
{
    printf("H%cllo, %s %d %Le\n", 'e', "wolrd!", 8, 4.9000000 - 302L);/*_______________________*/

    return 0;
}
/*"H%cllo, %s %d %Le\n"에서 서식 지정자 부분을 완성하여 
Hello, world! 8 4.900000e-302를 출력해야 합니다. 
여기서는 %c가 문자이므로 리터럴 'e', %s는 문자열이므로 
리터럴 "world!", %d는 10진 정수이므로 리터럴 8, 
%Le는 지수 표기법에 long double 크기이므로
리터럴 4.9e-302L를 차례대로 넣어주면 됩니다*/