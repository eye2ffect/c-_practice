#include<iostream>

int main()
{
	int arr[3][3] = { 0 };

	int a = 0; int b = 0; int c = 0;
	std::cin >> a >> b >> c;

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == arr[a][b])
			{
				arr[a][b] = c;
			}
			std::cout << arr[i][j];
		}
	}


	




	return 0;
}