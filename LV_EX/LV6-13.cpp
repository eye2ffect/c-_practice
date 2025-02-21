#include<iostream>

int main()

{
	int a = 0; 
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	for (int x = a; x <= b; x++)
	{
		std::cout << x;
	}

	return 0;
}