#include<iostream>

int main()

{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	if (a == 1111 && b == 2222)
	{
		std::cout << "로그인성공";
	}

	else if (a > 1111 || a < 1111 || b == 2222)
	{
		std::cout << "아이디가 틀렸습니다.";
	}

	else if (b > 2222 || b < 2222 || a == 1111)
	{
		std::cout << "비밀번호가 틀렸습니다.";
	}


	return 0;
}