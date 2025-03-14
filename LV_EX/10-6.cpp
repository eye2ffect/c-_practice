#include<iostream>

int main()
{
	int arr[4][4] = { 0 };

	int x, y;
	int num = 1 ;


	for (x = 3; x >= 0; x--)
	{
		
		for (y = 0; y < 4; y++)
		{
			arr[y][x] = num;
			num++;
		}
    }
	
	for (y = 0; y < 4; y++)
	{
		std::cout << std::endl;
		for (x = 0; x < 4; x++)
		{
			std::cout << arr[y][x] << " ";

		}
	}


	return 0;
}