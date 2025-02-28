#include<iostream>

int main()
{

	int a = 0;
	std::cin >> a;


	if (a >= 80)

	{
		std::cout << "수";
	}

	else if (a >= 70)
	{
		std::cout << "우";
	}

	else if (a>=60)
	{
		std::cout << "미";
	}

	else
	{
		std::cout << "재시도";
	}


	return 0;
}