#include<iostream>

int main()

{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	if (a == 1111 && b == 2222)
	{
		std::cout << "�α��μ���";
	}

	else if (a > 1111 || a < 1111 || b == 2222)
	{
		std::cout << "���̵� Ʋ�Ƚ��ϴ�.";
	}

	else if (b > 2222 || b < 2222 || a == 1111)
	{
		std::cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.";
	}


	return 0;
}