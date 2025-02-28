#include<iostream>

int arr[6] = {};

void PrintAll()

{

	for (int i = 0; i <= 5; i++)
	{

		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

}

int main()
{
	int a = 0;
	std::cin >> a;

	for (int k = 0; k <= 5; k++)
	{

		arr[k] = a;
		a =a+1;
	}

	PrintAll();

	return 0;
}