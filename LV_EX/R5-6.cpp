#include<iostream>

int main()
{

	int arr[7] = { 3,5,1,2,4,6,7 };

	int a = 0; int b = 0;

	std::cin >> a >> b;

	for (int i = a; i <= b; i++)
	{

		std::cout << arr[i];
	}

	return 0;
}