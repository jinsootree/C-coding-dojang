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
	scanf�� ���� num1�� num2�� �� �Ǽ��� ����˴ϴ�.
	���� ����� num3�� �����ϸ� �˴ϴ�.
	�� �Ǽ��� ���� ������ 4.5�� ���ҽ�Ű��� �����Ƿ�
	num3 = num1 + num2;�� ���� �� �Ǽ��� ���ϰ�,
	num3 -= 4.5f;�� ���� num3�� ���� 4.5 ���ҽ�Ű�� �˴ϴ�.

	________________*/

	printf("%f\n", num3);

	return 0;
}
