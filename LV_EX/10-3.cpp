#include<iostream>

int main()
{   
	int arr[3][3] = { 0 };

	int a = 0;
	
	int x, y;
	
	std::cin >> a;

	
	int num = 1;

	if (a % 5 == 1)
	{
		
		
		for (x = 2; x >=0; x--)
		{
			
			for (y= 0; y<3; y++)
			{
				arr[y][x] = num;
				num++;
				
			}
		}

	}
	
	else if (a % 5 == 2)
	{
		for (y = 2; y >=0; y--)
		{
			
			for (x= 0; x<3; x++)
			{
				arr[y][x] = num;
				num++;
				
			}
		}
		
	}
	
	else
	{
		num = 10;
		for (x = 0; x < 3; x++)
		{

			for (y = 2; y >= 0; y--)
			{
				arr[y][x] = num;
				num++;
				//
			}
		}
	}
	
	for (y = 0; y < 3; y++)
	{
		std::cout << std::endl;
		for (x = 0; x < 3; x++)
		{
			std::cout << arr[y][x];

		}
	}
	

	return 0;
}