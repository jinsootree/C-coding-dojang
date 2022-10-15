#include <stdio.h>

int main()
{
    char c1 = 'k';

    if (c1 == 'k')/*__*/
    {
        printf("k입니다.\n");
    }

    return 0;
}
/*변수 c1에 'k'가 저장되어 있습니다.
따라서 if조건문이 만족할 수 있도록 c1 == 'k'와 같이 조건식을 만들어주면 됩니다.
또는, 'k'의 ASCII 코드가 107이므로 c1 == 107과 같이 조건식을 만들어도 됩니다*/