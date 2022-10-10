#pragma GCC diagnostic error "-Werror"
#include <stdio.h>

int main()
{
	const long double con1 = -2.225074e-308; /*_______________________________*/
	const int con2 = 0x1285;
	const long long con3 = 9223372036854775807LL;

	printf("%Le 0x%x %lld\n", con1, con2, con3);

	return 0;
}
/*"%Le 0x%x %lld\n"에서 서식 지정자 부분에
con1, con2, con3을 넣어서 -2.225074e-308 0x1285 9223372036854775807를 출력하고 있습니다. 
따라서 서식 지정자에 맞게 상수를 선언하고 값을 초기화하면 됩니다.

%Le: 지수 표기법에 long double 크기이므로 
const long double con1 = -2.225074e-308L과 같이 선언하고 초기화합니다.*/