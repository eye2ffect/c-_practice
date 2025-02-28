#include<iostream>

int arr[6];

int a = 0;


int main()

{
	std::cin >> a;

	if (a == 2)
	{

		for (int i = 0; i <= 5; i++)
		{
			arr[i] = a * i + 2;
			std::cout << " " << arr[i];
		}
	}

	else if (a == 3)
	{

		for (int i = 0; i <= 5; i++)
		{
			arr[i] = a * i + 3;
			std::cout << " " << arr[i];
		}
	}

	return 0;
}