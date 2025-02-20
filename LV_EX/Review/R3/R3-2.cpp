#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	for (int x = a; x <= a + 2; x++)
	{ // for문 조건까지는 완료 

		std::cout << x << x << x << std::endl;
		//이런식으로 반복? 
	}

	return 0;
}