#include<iostream>

int main()
{
	int a = 0; int b = 0; int c = 0;

	std::cin >> a >> b >> c;

	for (int d = a; d <= b; d++)
	{
		std::cout << d << " ";

	}
	std::cout << std::endl;

	for (int e = a; e <= c; e++)
	{
		std::cout << e << " ";
	}


	return 0;
}