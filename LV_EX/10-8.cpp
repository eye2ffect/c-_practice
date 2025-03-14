#include<iostream>

int main()
{
	int arr[4][4] = { 0 };

	int x, y,z;
	

	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < 4; x++)
		{
			std::cin >> z;
			arr[y][x] += z;
		}
	}

	
	
	for (y = 0; y < 4; y++)
	{
		std::cout << std::endl;
		for (x = 0; x < 4; x++)
		{
			if (arr[y][x] % 2 == 0 && arr[y][x] >0)//Â¦¼ö
			{
				std::cout << "#";
			}

			else if (arr[y][x] == 0)
			{
				std::cout << "!";
			}

			else if(arr[y][x] %2 == 1)
			{
				std::cout << "@";
			}
		}
	}
	

	

	return 0;
}