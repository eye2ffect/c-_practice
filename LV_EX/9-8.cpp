#include<iostream>

void BBQ(int a, int b)
{
	std::cout << "��:" << a + b<<std::endl;
	std::cout << "��:" << a - b << std::endl;
	std::cout << "��:" << a * b << std::endl;
	std::cout << "��:" << a / b << std::endl;
}

int main()
{

	int a, b;
	std::cin >> a >> b;

	BBQ(a, b);

	return 0;
}