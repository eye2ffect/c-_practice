#include<iostream>

int main()
{
	int a = 0;
	std::cin >> a;

	
	//�̷��� �ۼ��ϸ� �ϳ��� 3�ϰ��� ����� ���� 5�ϰ���
	if (a > 3 || a < 3)
	{
		std::cout << "3�� �ƴϴ�" << std::endl;
	}

	if (a > 5 || a < 5)
	{

		std::cout << "5�� �ƴϴ�" << std::endl;
	}

	if (a > 1 && a < 10)
	{
		for (int i = 5; i >= 1; i--)
		{

			std::cout << i << " " << std::endl;

		}

	
	}

	return 0;
}