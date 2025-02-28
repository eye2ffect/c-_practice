#include<iostream>


void KFC()
{
	std::cout << "KFC입니다";

}

void MC()
{
	std::cout << "MC입니다.";
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