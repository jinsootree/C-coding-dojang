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
/*"%Le 0x%x %lld\n"���� ���� ������ �κп�
con1, con2, con3�� �־ -2.225074e-308 0x1285 9223372036854775807�� ����ϰ� �ֽ��ϴ�. 
���� ���� �����ڿ� �°� ����� �����ϰ� ���� �ʱ�ȭ�ϸ� �˴ϴ�.

%Le: ���� ǥ����� long double ũ���̹Ƿ� 
const long double con1 = -2.225074e-308L�� ���� �����ϰ� �ʱ�ȭ�մϴ�.*/