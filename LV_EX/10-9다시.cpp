#include<iostream>

int input()
{
	int c = 0;

	std::cin >> c;

	return c;
	
}

int CountDown(int c)
{
	for (int i = 1; i <= c; i++)
	{
		std::cout << i;
	}

	return c;
}

int main()
{
	int c = 0;

	input(c);
	CountDown(c);

	return 0;
}