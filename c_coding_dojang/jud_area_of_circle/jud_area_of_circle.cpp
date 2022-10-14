#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
	float diameter;
	float radius;
	float area;

	scanf("%f", &diameter);

	radius = diameter / 2;
	area = radius * radius * M_PI;


	printf("%f\n", area);

	return 0;
}

/*scanf로 변수 diameter에 원의 지름이 저장됩니다.
하지만 원의 넓이를 구하는 방법은 반지름 * 반지름 * 원주율이므로 반지름이 필요합니다.
따라서 radius = diameter / 2;와 같이 반지름을 먼저 구한 뒤
radius * radius * M_PI와 같이 계산해주면 됩니다.*/