#include<iostream>

int main()

{
	char ch;

	std::cin >> ch;

	std::cout << (char)(ch - 'a' + 'A');
	//소문자에서 빼서 몇번째 소문자인지 체크
	//그순자에서 a값으로 변동 



	return 0;
}

