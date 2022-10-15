#include <stdio.h>

int main()
{
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 800)
        printf("합격\n");
    else
        printf("불합격\n");

    return 0;
}

/*합격 조건이 필기 시험 점수가 80점 이상이면서 
토익이 850점 이상이라고 했으므로 두 조건이 모두 만족해야 합니다.
따라서 writtenTest >= 80 && toeic >= 850와 같이 각 변수에 들어있는 값이
특정 점수 이상인지 검사하는 조건식을 만들고
각 조건식을 && 논리 연산자로 연결해주면 됩니다.*/