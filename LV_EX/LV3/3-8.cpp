#include<iostream>

int main()
{
	int a; //������ �ʱ�ȭ�� 0���� ����?
	std::cin >> a;

	for (int x = 1; x <= a; x++)
	{
		std::cout << "##" << std::endl;
	}

	return 0;
}