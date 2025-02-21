#include<iostream>
int main()

{
	int arr[5] ;
	int arr2[5];

	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> a;
		arr[i] =+ a;
		arr2[i] = +a;
	}


		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i];
		}

		std::cout << std::endl;

		for (int k = 0; k < 5; k++)
		{
			std::cout << arr2[k];
		}
	

	//std::cout << arr2[i];

	return 0;
}