#include<iostream>

int main()
{
	int arr[5] = { 0 };

	int count = 0;
	int a = 0;

	for (int x = 0; x < 5; x++)
	{   	
		std::cin >> a;
		arr[x]=+a;
	}


	for (int x = 0; x < 5; x++)
	{
		if (3 <= arr[x] && arr[x] <= 7)
		{
			count++;
		}
	}
	std::cout << count;
	
	

	return 0;
}

