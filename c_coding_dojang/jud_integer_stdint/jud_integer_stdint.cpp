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
/*int8_t, uint16_t, uint32_t, int64_t�� 
���� ũ�Ⱑ ǥ�õ� ���� �ڷ����� 
stdint.h ��� ���Ͽ� ���ǵǾ� �����Ƿ�
#include <stdint.h>�� ���� ��� ������ �������ָ� �˴ϴ�.
*/