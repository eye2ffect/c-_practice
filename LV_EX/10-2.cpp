#include<iostream>
char getChar()
{
	char a = 'A';
	char b = 'B';

	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << a;
		
		return a;
	}
	

	else
	{
		std::cout << b;

		return b;
	}

	
}


int main()
{
	getChar();

	return 0;
}