#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;

    num1 = num1 / 100000000.0f /*___________*/;

    printf("%e\n", num1);

    return 0;
}
/*float의 최솟값인 FLT_MIN이 0이 되었다면 
언더플로우가 발생한 상황입니다. 
따라서 num1을 큰 수로 나누면 됩니다.*/