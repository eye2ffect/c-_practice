#include<iostream>

int main()
{
	int arr[81] = { 3,9,27,81,243 };

	int a = 0;
	std::cin >> a;
	//arr[81] -= 100;
	arr[a] -= 100;
	
	std::cout << arr[a];



	return 0;
}