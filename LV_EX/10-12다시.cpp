#include<iostream>

char aToz(char a)
{
	

	std::cin >> a;

	if (a >= 'A' && a <= 'Z')
	{
		if (a - 'A' < 'Z' - a)
		{
			return 'A';
		}
		else {
			return 'Z';
		}
	}


}


int main()

{
	char in;
	std::cin >> in;
	char r = aToz(in);


	return 0;
}