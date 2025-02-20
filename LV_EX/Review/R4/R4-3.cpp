#include<iostream>

int main()
{

	int arr[5];

	int a = 0;
	std::cin >>a;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a; 
	}


	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i];

	}



	return 0;
}