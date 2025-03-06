#include<iostream>

int main()
{

	char a[6] = { 'D','T','A','B','W','Q' };

	char b = 'A';

	std::cin >> b;

	for (int i = 0; i < 6; i++)
	{
		if (a[i] == b)
		{
			std::cout << i << "¹øINDEX";
		}
	}



	return 0;
}