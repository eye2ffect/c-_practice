#include<iostream>

char Q[17] = { "" };

char a = 'A';
char b = 'B';
char c = 'C';


void input()
{
	std::cin >> a >> b >> c;
	for (int i = 0; i < 7; i++)
	{
		Q[i] += a;
	}


	for (int i = 7; i < 13; i++)
	{
		Q[i] += b;
	}

	for (int i = 13; i < 17; i++)
	{
		Q[i] += c;
	}


}


int main()
{

	input();
	for (int i = 16; i >= 0; i--)
	{
		std::cout << Q[i];
	}

	return 0;
}
