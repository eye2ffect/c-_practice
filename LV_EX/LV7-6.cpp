#include<iostream>

int main()

{
	int arr[4] = { 0 };

	int a = 0; 

	for (int i = 0; i < 4; i++)
	{
		std::cin >> a;
		arr[i] = +a;
	}

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] < 20)
		{
			std::cout << "�� ū���� �Է��ϼ���";
		}

		if (arr[i] > 20)
		{
			std::cout << "�� �������� �Է��ϼ���";
		}

		 if (arr[i] == 20)
		{
			std::cout << "�����Դϴ�";
		}

		 std::cout << std::endl;
		 std::cout << std::endl;
	}

	return 0;
}