#include <stdio.h>
#include <float.h>

int main()
{
    double doubleMin;
    double doubleMax;
    long double longDoubleMin;
    long double longDoubleMax;

    doubleMin = DBL_MIN;
    doubleMax = DBL_MAX;
    longDoubleMin = LDBL_MIN;
    longDoubleMax = LDBL_MAX;
    /*______________________
    ________________________
    ________________________
    ______________________*/

    printf("%e %e\n", doubleMin, doubleMax);
    printf("%Le %Le\n", longDoubleMin, longDoubleMax);

    return 0;
}
/*float.h 헤더 파일이 포함되어 있으므로 
최솟값과 최댓값을 
일일이 입력하지 않고 
미리 정의된 값을 사용합니다. 
double의 최솟값과 최댓값은 DBL_MIN, DBL_MAX, 
long double의 최댓값은 LDBL_MIN, LDBL_MAX입니다.*/