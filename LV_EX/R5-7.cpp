#include<iostream>

int main()
{

	int arr[4]; //������ �迭

	int a = 0;
	std::cin >> a;

	for (int i = 0; i < 4; i++)
	{


		arr[i] = a - i;
		std::cout << " " << arr[i];
	}
	//4,3,2,1 �迭 3���� �� [3] [2][1][0],
	//


	return 0;
}