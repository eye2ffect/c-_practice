#include<iostream>

int main()
{
	int count = 0;
	int arr[6][2] = { 0 };
	
	for (int x = 0; x < 6; x++)
	{
		for (int i = 0; i < 2; i++)
		{
			std::cin >> arr[x][i];
		}
	}


	for (int x = 0; x < 6; x++)
	{
		
		if (arr[x][0] < arr[x][1])
		{
			int temp = arr[x][0];
			arr[x][0] = arr[x][1];
			arr[x][1] = temp;
			//swap 바뀜

			count++;
		}
	}

	//swap 바뀌고 나머지만 출력
	for (int x = 0; x < 6; x++)
	{
		std::cout << std::endl;
		for (int i = 0; i < 2; i++)
		{
			std::cout << arr[x][i];
		}
	}
	
	std::cout << std::endl;

	std::cout<<count<<"명";

	return 0;
}