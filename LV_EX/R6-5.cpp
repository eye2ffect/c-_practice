#include<iostream>

int main()
{

	int arr[3] = { 0 };

	int a = 0;

	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> a;
		arr[i] = +a;
		sum =+ arr[i]+a;
	}
	



	for (int k = 1; k <= sum; k++)
	{

		
		for (int i = 0; i < 3; i++)
		{
			std::cout << " " << arr[i];
		}
		std::cout <<  std::endl;

	}


	return 0;
}