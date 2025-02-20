#include<iostream>

int main()
{
	int a = 0;
	std::cin >> a;

	
	//이렇게 작성하면 하나만 3일경우라도 출력이 가능 5일경우라도
	if (a > 3 || a < 3)
	{
		std::cout << "3이 아니다" << std::endl;
	}

	if (a > 5 || a < 5)
	{

		std::cout << "5가 아니다" << std::endl;
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