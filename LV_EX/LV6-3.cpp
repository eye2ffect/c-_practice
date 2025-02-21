#include<iostream>

int main()
{
	int a = 0;
	std::cin >> a;

	for (int K = 1; K <= a; K++)

	{
		for (int i = 1; i <= 5; i++)

		{
			std::cout<<" "<< i;
		}

		std::cout<< std::endl;
	}

	return 0;
}