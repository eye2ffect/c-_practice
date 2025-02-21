#include<iostream>

int main()
{
	char str= 0;

	std::cin >> str;

	if (str >= 'a' && str <= 'z')
	{
		std::cout << "소문자입력!!";
	}

	else if (str >= 'A' && str <= 'Z')
	{
		std::cout << "대문자입력!!";
	}

	else if (str >= '0' && str <= '9')
	{
		std::cout << "숫자문자입력!!";
	}


	return 0;
}