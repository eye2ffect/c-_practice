#include<iostream>

int main()

{
	int a, b, c;
	std::cin >> a >> b >> c;
	//첫 번째로 입력 받은 숫자가 나머지 숫자 2개 보다 큰 숫자

	if (a >= b && a >= c)
	{
		std::cout << "MAX발견";
	}

	else
		std::cout << "MAX아님";

	return 0;
}