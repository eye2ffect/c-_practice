#include<iostream>


void KFC()
{
	std::cout << "KFC�Դϴ�";

}

void MC()
{
	std::cout << "MC�Դϴ�.";
}

int main()
{
	int a = 0;
	std::cin >> a;

	if (a == 1)
	{
		KFC();
	}

	else if (a == 2)
	{
		MC();
	}


	return 0;
}