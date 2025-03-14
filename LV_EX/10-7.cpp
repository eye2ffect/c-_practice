#include<iostream>

int main()
{

	int arr[3][4] = { 0 };

	int x, y ,z;
	int num = 1;

	for (y = 2; y >= 0; y--)
	{
		for (x = 3; x >= 0; x--)
		{
			arr[y][x] = num++;
		}
	}

	std::cin >> z;

	for (y = 0; y < 3; y++)
	{
		
		for (x = 0; x < 4; x++)
		{
			if (arr[y][x] == arr[y][z])
			{
				arr[y][x] = 0;
			}
		}
	}



	
	for (y = 0; y < 3; y++)
	{
		std::cout << std::endl;
		for (x = 0; x < 4; x++)
		{
			std::cout<< arr[y][x] << " ";
		}
	}




	return 0;
}