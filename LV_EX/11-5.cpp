#include<iostream>



int main()

{
	int a = 0; int b = 0;

	std::cin >> a>>b;

	int* p = &a;//������������ ���� ab�� ����Ų�� 
	int* t = &b;

	int temp = *p;
	*p = *t;
	*t = temp;

	std::cout << a << " " << b;

	return 0;
}

