#include<iostream>

int main()
{

	int arr[2][4] = { 0 };//�ʱ�ȭ 0���� ä����

	int a = 0; int b = 0;

	std::cin >> a >> b;

	arr[a][b] = 1;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}


	return 0;
}