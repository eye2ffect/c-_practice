#include<iostream>

int main()
{
	int arr[2][3] =
	{

		{3,1,1},
		{2,3,2}

	};

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			std::cout << arr[a][b];
		}
	}





	return 0;
}