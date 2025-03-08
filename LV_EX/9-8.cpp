#include<iostream>

void BBQ(int a, int b)
{
	std::cout << "ÇÕ:" << a + b<<std::endl;
	std::cout << "Â÷:" << a - b << std::endl;
	std::cout << "°ö:" << a * b << std::endl;
	std::cout << "¸ò:" << a / b << std::endl;
}

int main()
{

	int a, b;
	std::cin >> a >> b;

	BBQ(a, b);

	return 0;
}