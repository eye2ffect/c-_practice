#include<iostream>

// 전역 변수 a
int a = 0;

void KFC()
{

	
	std::cin >> a;

}

void BBQ()

{
	if (a > 5)
	{
		std::cout << "만세";
	}

	else
	{
		std::cout << "다시";
	}

}



int main()

{

	KFC();
	BBQ();

	return 0;
}