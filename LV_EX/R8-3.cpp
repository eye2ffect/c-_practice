#include<iostream>

int main()
{
	char a[5] = { "" };
	int n = 0;
	char b = 'A';

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> b;
		a[i] += b;
	}

	for (int i = 0; i <= n - 1; i++)
	{
		std::cout << a[i] << " ";
	}

   

	return 0;
}