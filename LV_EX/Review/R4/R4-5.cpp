#include<iostream>

int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
	//int a = 0; int b = 0; int c = 0;

	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6];

	std::cout << arr[0] + arr[1] + arr[2];

	return 0;
}