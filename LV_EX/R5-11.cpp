#include<iostream>



int main()
{
	int arr[6];

	int a = 0; int b = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> a;
		arr[i] = +a;
	}
	std::cin >> b;

	for (int i = 0; i < 3; i++)
	{

		std::cout << " " << arr[i];
		//
	}



	for (int i = 3; i < 6; i++)
	{

		arr[i] = b - 3 + i;
		std::cout << " " << arr[i];
	}



	return 0;
}