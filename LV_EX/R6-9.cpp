#include<iostream>

int main()

{
	int arr[6] = { 5,4,1,2,7,8 };
	int a = 0;
    std::cin >> a;



	for (int x = 1; x <= a; x++)
	{

		for (int i = 5; i >= 0; i--)
		{
			std::cout<< " " << arr[i];
		}
		std::cout << std::endl;
	}

	return 0;
}