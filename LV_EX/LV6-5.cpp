#include<iostream>

int main()
{
	char str[4] = { 'B','T','K','A' };

	int a = 0;
	std::cin >> a;

	for (int k = 0; k < a; k++)\
	{

		for (int i = 0; i < 4; i++)
		{
			std::cout << " " << str[i];
		}
		std::cout << std::endl;
	}

	return 0;
}