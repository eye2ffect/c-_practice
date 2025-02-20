#include<iostream>

void LOT()
{

	

	for (int i = 1; i <= 5; i++)
	{
		
		std::cout << i;

    }
	std::cout<<  std::endl;
}


int main()
{
	int a = 0;
	std::cin >> a;

	for (int i = 1; i <= a; i++)
	{
		LOT();
	}


	return 0;
}