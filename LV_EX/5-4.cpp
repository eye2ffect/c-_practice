#include<iostream>
/*

#include <iostream>

// return 값이 없는 함수의 형태 void
void print()
{
	std::cout << "안녕하세요";
}

int main()
{
	print();
	print();
	return 0;
}

// 출력 결과
// 안녕하세요안녕하세요


*/


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