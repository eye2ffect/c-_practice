#include<iostream>

int main()
{
	int a = 0;

	std::cin >> a;

	for (int x = 1; x <= a; x++)
	{
		std::cout << "#";

	}
	std::cout << std::endl;


	for (int x = 1; x <= a; x++)
	{
		std::cout << "@";
	}
	std::cout << std::endl;

	for (int x = 1; x <= a; x++)
	{
		std::cout << "#";
	}
	std::cout << std::endl;

	for (int x = 1; x <= a; x++)
	{
		std::cout << "@";
	}



}