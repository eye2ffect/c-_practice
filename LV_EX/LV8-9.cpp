#include<iostream>
int arr[2][3] = { 0 };

int a = 0;
int sum = 0;

void input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> a;
			arr[i][j] = a;
		}
	}
}

void process()
{
	sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			
			sum += arr[i][j];
		}
	}
}

void output() {
	
	std::cout << sum ;
}


int main()
{

	input();
	process();
	output();
	return 0;
}