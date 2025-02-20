#include<iostream>
int main()

{
	int a = 0; int b = 0;

	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << "큰수는" << a;
	}

	if (a < b)
	{
		std::cout << "큰수는" << b;
	}

	if (a == b)
	{
		std::cout << "같은숫자";
	}


	return 0;
}