#include<iostream>

char flag;
char a;
char b;
char c;

void input()
{
	std::cin >> a >> b >> c;
}

void process()
{
	if (a == 'A' || a == 'B' || a == 'C')
	{
		if (b == 'A' || b == 'B' || c == 'C')
		{
			if (c == 'A' || c == 'B' || c == 'C')
			{
				flag = 1;
			}
		}
	}
}

void output()
{
	if (flag == 1)
	{
		std::cout << "ABC��ã�Ҵ�";
	}

	else
	{
		std::cout << "��ã�Ҵ�.";
	}

}

int main()

{
	input();

	process();

	output();

	return 0;
}