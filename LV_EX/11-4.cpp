#include<iostream>

int main()
{
	char a = 'A';
	char b = 'B';
	char c = 'C';

	std::cin >> a >> b >> c;

	char* ptr1 = &a;
	char* ptr2 = &b;
	char* ptr3 = &c;

	(*ptr1)++;//����Ų a�� �������� �ᱹ 1�� ���Ѱ�
	//( *ptr2 ) = 100; �̰Ŵ� 100�� ���Ѱ� 
	(*ptr2)++;
	//(*ptr3) = 'B'; �������ڿ�����B�� ��ü�Ȱ� 
	(*ptr3)++;

	std::cout << *ptr1 << " " << *ptr2 << " " << *ptr3;



	return 0;
}