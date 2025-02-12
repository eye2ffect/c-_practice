#include<iostream>

int main()

{

	//공통규칙 2씩 증가 에서 범위 숫자 5개지정

	int a = 0;
	std::cin >> a;


	//std::cout << "1";
	//a=a+1 ;   x= x+1 

	for (int x = 1; x <= a++; x++)
	{


		std::cout << x++ << " ";

	}

	return 0;
}