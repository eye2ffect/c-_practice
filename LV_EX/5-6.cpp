#include <iostream>
/*
[TIP] ���� �� �� ���� ��, �Ʒ� ������ Ǯ���ּ���

�Լ��� ȣ��(Call)�ϴ� - ������� �ִ� �Լ��� �θ��� ���� �ǹ�
ex) KFC(); // main�Լ����� KFC�Լ��� ȣ���Ѵ�.

�Լ��� �����ϴ� - �Լ��� ����� ���� ����
ex) void KFC() { ... } // KFC�Լ��� �����ϴ�.
*/
void KFC()

{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "#";
	}
	std::cout<<" "<< std::endl;
}

void MC()

{
	for (int i = 0; i < 10; i++)
	{
		std::cout << '@';
	}
	std::cout << "  " << std::endl;
}


int main()

{

	KFC();
	std::cout << " " << std::endl;
	MC();

	return 0;
}