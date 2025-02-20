#include<iostream>

int main()
{
	int a; //무조건 초기화후 0으로 설정?
	std::cin >> a;

	for (int x = 1; x <= a; x++)
	{
		std::cout << "##" << std::endl;
	}

	return 0;
}