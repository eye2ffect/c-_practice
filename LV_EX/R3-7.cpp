#include<iostream>

int main()
{
	int a = 0; int x = 0;
	std::cin >> a >> x;

	//std::cout << a << "보다 작은 수" << b << "개를 출력하면 됩니다.";
	// 5         5-3 =
	for (int b = a; b > a - x; b--)
	{
		std::cout << x - 1 << " ";
	}

	return 0;
}