#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)     // i가 100보다 작거나 같을 때 반복. 1부터 100까지 증가하면서 100번 반복
    {
        i++;             // i를 1씩 증가시킴
        if (i % 2 != 0)  // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
            continue;    // 아래 코드를 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}