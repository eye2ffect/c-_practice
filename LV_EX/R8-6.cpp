#include<iostream>


int main()
{
	char a = 'A';
	int b = 0;

	std::cin >> a >> b;


	for (int j = 1; j <= b; j++)
	{
		std::cout << std::endl;
		for (int i = 1; i <= b; i++)
		{
			std::cout << a;
		}

	}


	return 0;
}