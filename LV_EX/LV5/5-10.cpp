#include<iostream>

int arr[4];


void input()
{
	for (int i = 0; i < 4; i++)
	{
		std::cin >> arr[i];//배열입력
	}
	std::cout << std::endl;
}

void output()
{
	
	for (int i = 3;  i>=0; i--)
	{

		std::cout << arr[i];

	}
}


int main()
{
	input();
	output();

	return 0;
}