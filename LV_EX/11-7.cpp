#include<iostream>

int main()
{
	int vect[7] = { 0 };

	int max = 0;

	for (int i = 0; i < 7; i++)
	{
		std::cin >> vect[i];
	}

	for (int i = 0; i < 7; i++)
	{
		if (max < vect[i])
		{
			max = vect[i];
		}


	}

	int min = 10000;

	for (int i = 0; i < 7; i++)
	{
		if (min > vect[i])
		{
			min = vect[i];
		}
	}

	std::cout << "MAX=" << max << std::endl;
	std::cout << "MIN=" << min << std::endl;

	return 0;
}