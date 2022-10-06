#include <stdio.h>

int main()
{
	char c1;
	char c2;
	char c3;

	c1 = '\t';
	c2 = '\n';
	c3 = '\t';

/*
"Hello%cworld%c\Hello%cworld"과 같이 서식 지정자가 섞여있고 
한 줄로 된 문자열을 두 줄로 만들어야 합니다.
먼저 "Hello"와 "world" 사이를 탭으로 띄우라고 했는데 
문자 하나로 여러 칸을 띄우려면 문자 하나로 여러 칸을 띄우려면 
탭키 효과를 내는 제어 문자 '\t'를 사용해야 합니다. 
그리고 "Hello"가 새 줄에서 시작하므로 
두 번째 %c에는 줄바꿈 제어 문자인 '\n'이 들어가야 합니다.
따라서 c1에는 '\t', c2에는 '\n', c3에는 '\t'을 저장하면 됩니다.
*/

	printf("Hello%cworld%cHello%cworld\n", c1, c2, c3);

	return 0;
}
