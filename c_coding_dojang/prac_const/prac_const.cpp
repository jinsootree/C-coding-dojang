#include <stdio.h>

int main()
{
	const unsigned long long con1 = 10ULL;/*(1)_________________________*/
	const float con2 = 3.2f;/*(2)_________________________*/
	const char con3 = 't';/*(3)_________________________*/

	printf("%llu %f %c\n", con1, con2, con3);

	return 0;
}
/*"%llu %f %c\n"���� ���� ������ �κп� con1, con2, con3��
�־ 10 3.200000 t�� ����ϰ� �ֽ��ϴ�.
���� ���� �����ڿ� �°� ����� �����ϰ� ���� �ʱ�ȭ�ϸ� �˴ϴ�.

%llu: unsigned long long ũ���̹Ƿ� const unsigned long long con1 = 10ULL�� ���� �����ϰ� �ʱ�ȭ�մϴ�.
%f: float �Ǵ� double ũ���̹Ƿ� const float con2 = 3.2f �Ǵ� const double con2 = 3.2�� ���� �����ϰ� �ʱ�ȭ�մϴ�.
%c: char ũ���̹Ƿ� const char con3 = 't'�� ���� �����ϰ� �ʱ�ȭ�մϴ�.*/