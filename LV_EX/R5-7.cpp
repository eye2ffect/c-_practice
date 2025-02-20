#include<iostream>

int main()
{

	int arr[4]; //데이터 배열

	int a = 0;
	std::cin >> a;

	for (int i = 0; i < 4; i++)
	{


		arr[i] = a - i;
		std::cout << " " << arr[i];
	}
	//4,3,2,1 배열 3부터 들어가 [3] [2][1][0],
	//


	return 0;
}