#include <stdio.h>
#include <stdint.h> /*_______________*/

int main()
{
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    uint32_t num3 = 0;
    int64_t num4 = INT64_MAX;

    printf("%d %u %u %lld\n", num1, num2, num3, num4);

    return 0;
}
/*int8_t, uint16_t, uint32_t, int64_t와 
같이 크기가 표시된 정수 자료형은 
stdint.h 헤더 파일에 정의되어 있으므로
#include <stdint.h>와 같이 헤더 파일을 포함해주면 됩니다.
*/