#include<iostream>

char arr[3] = { 'A','B','C' };


void KFC()
{
	
	for (int i = 0; i <3; i++)
	{
		std::cout << arr[i];


	}
	std::cout << std::endl;
}

int main()
{
	int a = 0;
	std::cin >> a;

	for (int i = 1; i <= a; i++)
	{
		KFC();
		std::cout << std::endl;
	}

	return 0;
}