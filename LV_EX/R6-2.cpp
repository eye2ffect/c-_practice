#include<iostream>

int main()
{
	char ch;

	std::cin >> ch;

	for (int i = ch; i >= 'a'; i--)
	{
		std::cout << (char)i;
	}


	return 0;
}