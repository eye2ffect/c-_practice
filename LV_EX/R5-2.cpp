#include<iostream>

void KFC()
{
	std::cout << "KFC" << std::endl;
}

void BBQ()
{
	std::cout << "BBQ" << std::endl;
}


int main()
{
	char arr[3] = { 'B','b','7'};
	
	char a;
	std::cin >> a;

	if ('B' == a)
	{
		KFC();
		BBQ();
	}


	else if ('b' == a)
	{
		BBQ();
	}

	else if ('7'==a)
	{
		KFC();
	}


	return 0;
}