#include<iostream>
int main()

{
	int a = 0; int b = 0;

	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << "ū����" << a;
	}

	if (a < b)
	{
		std::cout << "ū����" << b;
	}

	if (a == b)
	{
		std::cout << "��������";
	}


	return 0;
}