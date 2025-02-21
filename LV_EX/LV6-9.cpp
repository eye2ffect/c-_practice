#include<iostream>

int main()

{
	char ch;
	std::cin >> ch;

	for (int x = 'A'; x <= ch; x++)
	{
		std::cout << (char)(x);
		//문자 변환기

	}
 

	return 0;
}