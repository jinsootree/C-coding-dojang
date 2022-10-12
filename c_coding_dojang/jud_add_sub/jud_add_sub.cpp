#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1;
	float num2;
	float num3;

	scanf("%f %f", &num1, &num2);

	num3 = num1 + num2 - 4.5f;
	/*________________
	scanf로 변수 num1과 num2에 두 실수가 저장됩니다.
	따라서 결과는 num3에 저장하면 됩니다.
	두 실수를 더한 값에서 4.5를 감소시키라고 했으므로
	num3 = num1 + num2;와 같이 두 실수를 더하고,
	num3 -= 4.5f;와 같이 num3의 값을 4.5 감소시키면 됩니다.

	________________*/

	printf("%f\n", num3);

	return 0;
}
