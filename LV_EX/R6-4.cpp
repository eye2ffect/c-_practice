#include<iostream>

int main()
{
	char str= 0;

	std::cin >> str;

	if (str >= 'a' && str <= 'z')
	{
		std::cout << "�ҹ����Է�!!";
	}

	else if (str >= 'A' && str <= 'Z')
	{
		std::cout << "�빮���Է�!!";
	}

	else if (str >= '0' && str <= '9')
	{
		std::cout << "���ڹ����Է�!!";
	}


	return 0;
}