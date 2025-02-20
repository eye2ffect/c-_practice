#include<iostream>

int main()
{
	int arr[10] = { 5,7,1,8,-4,-73,4,2,20,84 };

	int index = 0;
	std::cin >> index;

	for (int x = index; x >= 0; x--)
	{
		std::cout << arr[x];

	}



	return 0;
}