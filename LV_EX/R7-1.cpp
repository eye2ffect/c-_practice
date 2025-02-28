#include<iostream>

int main()

{

	int a = 0;
	std::cin >> a;


	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 5; j++)
		{
			std::cout << a;
		}
		
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 3; j++)
		{
			std::cout << a;
		}
		
	}


	return 0;
}