#include <stdio.h>
#include <float.h>/*(1)___________*/

int main()
{
    float num1 = FLT_MAX;
    double num2 = DBL_MAX/*(2)___*/;
    long double num3 = LDBL_MAX/*(3)___*/;

    printf("%.2f\n", num1);
    printf("%e\n", num2);
    printf("%Le\n", num3);

    return 0;
}
/*소스 코드의 FLT_MAX는 float.h 헤더 파일에 정의되어 있으므로 
#include <float.h>와 같이 헤더 파일을 포함해줍니다.
그리고 double의 최솟값은 DBL_MIN,
long double의 최댓값은 LDBL_MAX입니다.*/