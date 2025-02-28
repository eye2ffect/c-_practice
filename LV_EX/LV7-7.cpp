#include<iostream>

int main()

{

	int a = 0; int b = 0; int c = 0;
	
	std::cin >> a >> b >> c;

	
	if (a >= b && a >= c)
	{
		std::cout << "MAX=" << a<< std::endl;

		if (b > c)
		{
			std::cout << "MIN=" << c;
		}

		if(c > b)
		{
			std::cout << "MIN=" << b;
		}

		if (b == c)
		{
			std::cout << "MIN=" << b;
			//b,c나와도 같으니까
		}
	}

	else if (b >= a && b >= c)
	{
		std::cout << "MAX=" << b << std::endl;
		

		if (a > c)
		{
			std::cout << "MIN=" << c;
		}

		if (c > a)
		{
			std::cout << "MIN=" << a;
		}

		if (a == c)
		{
			std::cout << "MIN=" << a;
		}

	}

	else if (c >= a && c >= b)
	{
		std::cout << "MAX=" << c<< std::endl;

		if (b > a)
		{
			std::cout << "MIN=" << a;
		}

		if (a > b)
		{
			std::cout << "MIN=" << b;
		}

		if (b == a)
		{
			std::cout << "MIN=" << b;
		}



	}


	return 0;
}
