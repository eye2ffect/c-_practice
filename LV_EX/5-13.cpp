#include<iostream>

int main()
{

	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };

	int input = 0;
	std::cin >> input;

	for (int x = 0; x < 11; x += input)//ÈùÆ® x+=input
	{
		std::cout << arr[x];
	}


	return 0;
}