#include<iostream>

int main()
{
	int a = 0;
	char gd = 'A';

	std::cin >> a >> gd;

	int *p = &a;
	//int���� ������ P�� �����ϰ�
	//a�� ����Ų�� 
	char *t = &gd;

	std::cout << *p << " " << *t;
	//������ ���� ���
	return 0;

}