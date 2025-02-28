#include<iostream>

int a = 0;
int arr[3][3] = { 0 };

void input()
{
	
	std::cin >> a;
}

void process()
{
	for (int i = 0; i < 3; i++)
	{
		 

		for(int j =0; j<3; j++)
		{
			arr[i][j] =+ a+ i+i+ j;
		}
	}
}

void output()
{
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j]<<" ";
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