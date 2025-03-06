#include<iostream>
char a = 'A';

char ch1[5] = { 'B','D','5','Q','A' };
char ch2[5] = { 'Q','E','R','E','F' };

void input()
{
	
	std::cin >> a;

}

void output()
{
	if (a >= 'a' && a <= 'z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << ch1[i] << " ";
		}
    }

	else if (a >= 'A' && a <= 'Z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << ch2[i] << " ";
		}
	}

	else if (a >= '0' && a <= '9')
	{
		for (char i = 'H'; i >='A'; i--)
		{
			std::cout << i << " ";
		}
	}


}


int main()
{
	input();
	output();

	
	return 0;
}