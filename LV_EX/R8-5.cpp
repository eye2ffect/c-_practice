#include<iostream>

int main()
{
	char a = 'A';
	char b = 'B';
	int  c = 0;


	std::cin >> a >> b >> c;

	

	for (int i = 1; i <= c; i++)
	{
		std::cout << std::endl;
		for (char i = a; i <= b; i++)
		{
			std::cout << i;
		}

	}



	return 0;
}