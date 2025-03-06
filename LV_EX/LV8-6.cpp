#include<iostream>

int arr[3][4] = { 0 };
int a = 0;

void input()
{

	std::cin >> a;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] += a;

			a++;
		}
	}

}

void process()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			

			arr[i][j]= arr[i][j]+1;
		}
	}
}


void output()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << " ";

		}
		std::cout << std::endl;
	}
}

int main()
{

	input();
	process();
	output();
	return 0;

}