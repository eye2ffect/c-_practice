#include<iostream>

int main()
{
	int a = 0; //�������� �ʱ�ȭ
	int b = 0;

	std::cin >> a >> b;
	int c = a * b;

	if (30 < c && c < 50)
	{
		std::cout << "������ ������";
	}

	else if (c >= 50)
	{
		std::cout << "ū ������";
	}

	else if (c <= 30)
	{
		std::cout << "���� ������";
	}

	return 0;
}