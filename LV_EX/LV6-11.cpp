#include<iostream>

int main()
{
	char a;
	char b;
	std::cin >> a >> b;

	if (a == 'A' && b == 'D')
	{

		for (int Q = 0; Q < 4; Q++)
		{
			for (int x = 'A'; x <= 'D'; x++)
			{
				std::cout << (char)(x);
			}
			std::cout << std::endl;
		}

	}

	else if (a == 'B' && b == 'H')
	{
		for (int Q = 0; Q < 4; Q++)
		{
			for (int x = 'B'; b <= 'H'; x++)
			{
				std::cout << (char)(x);
			}

			std::cout << std::endl;
		
		}


	}


	return 0;
}