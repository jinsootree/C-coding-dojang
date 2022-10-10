#include <stdio.h>

int main()
{
	const unsigned long long con1 = 10ULL;/*(1)_________________________*/
	const float con2 = 3.2f;/*(2)_________________________*/
	const char con3 = 't';/*(3)_________________________*/

	printf("%llu %f %c\n", con1, con2, con3);

	return 0;
}
/*"%llu %f %c\n"에서 서식 지정자 부분에 con1, con2, con3을
넣어서 10 3.200000 t를 출력하고 있습니다.
따라서 서식 지정자에 맞게 상수를 선언하고 값을 초기화하면 됩니다.

%llu: unsigned long long 크기이므로 const unsigned long long con1 = 10ULL과 같이 선언하고 초기화합니다.
%f: float 또는 double 크기이므로 const float con2 = 3.2f 또는 const double con2 = 3.2와 같이 선언하고 초기화합니다.
%c: char 크기이므로 const char con3 = 't'와 같이 선언하고 초기화합니다.*/