#include<iostream>

int main()
{
	char a;
	char b;

	std::cin >> a >> b;

	std::cout << "문자'" << a << "'의 아스키코드값은 " << (int)a<< std::endl;
	std::cout << "문자'" << b << "'의 아스키코드값은 " << (int)b;


	return 0;
}