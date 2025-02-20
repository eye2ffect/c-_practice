#include<iostream>

int main()

{

	int arr[6] = { 1,2,3,4,5 };

	int a = 0;
	std::cin >> a;

	for (int x = 0; x < 6; x++)
	{

		arr[x] = a--;
		//std::cout << arr[x];
	}

	std::cout << arr[2];

	return 0;
}