#include<iostream>

int main()

{

	int a = 0;
	std::cin >> a;

	if (a > 5)
	{

		for (int i = 1; i <= 10; i++)
		{
			std::cout << i << " " << std::endl;
		}

	}

	else 

		for (int i = 5; i >= 1; i--)
		{
			std::cout << i << " " << std::endl;
		}

	return 0;
}