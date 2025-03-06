#include<iostream>

int a, b;

void input()
{
	std::cin >> a >> b;
}


void output()
{
	int c = a + b;
	int i = 5;
	while (i<=c)
	{
		std::cout << i<< " ";
		i++;	
	}
}




int main()
{

	input();
	output();
	return 0;
}
