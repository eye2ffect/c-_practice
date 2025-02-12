#include<iostream>

int main()
{
	int a; int b;

	std::cin >> a >> b;

	for (int x = a; x <= b; x++)
	{
		std::cout << x << std::endl;
	}

	return 0;
}