#include<iostream>

int main()
{
	int a = 0; //대입으로 초기화
	int b = 0;

	std::cin >> a >> b;
	int c = a * b;

	if (30 < c && c < 50)
	{
		std::cout << "적당한 사이즈";
	}

	else if (c >= 50)
	{
		std::cout << "큰 사이즈";
	}

	else if (c <= 30)
	{
		std::cout << "작은 사이즈";
	}

	return 0;
}