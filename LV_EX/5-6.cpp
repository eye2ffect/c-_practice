#include <iostream>
/*
[TIP] 다음 두 용어를 익인 후, 아래 문제를 풀어주세요

함수를 호출(Call)하다 - 만들어져 있는 함수를 부르는 것을 의미
ex) KFC(); // main함수에서 KFC함수를 호출한다.

함수를 정의하다 - 함수를 만드는 것을 뜻함
ex) void KFC() { ... } // KFC함수를 정의하다.
*/
void KFC()

{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "#";
	}
	std::cout<<" "<< std::endl;
}

void MC()

{
	for (int i = 0; i < 10; i++)
	{
		std::cout << '@';
	}
	std::cout << "  " << std::endl;
}


int main()

{

	KFC();
	std::cout << " " << std::endl;
	MC();

	return 0;
}