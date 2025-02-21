#include<iostream>

int x;
char Q;

int main()

{
	char ch[5] = { 0 };
	
	for (int i = 0; i < 5; i++)
	{
		std::cin >> Q;

	}

	int count = 0;

	for (x = 0; x < 5; x++)

	{

		if (ch[x] >= '0' && ch[x] <= '9')

		{

			count++;

		}

	}

	





	return 0;
}