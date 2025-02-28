#include<iostream>
char a, b;
void input()
{
	std::cin >> a >> b;

}

void output()
{

	if (a >= 'A' && a <= 'Z'&& b >= 'A' && b <= 'Z')
	{
		
			std::cout << "대문자들";
		
	}


	else if (a >= 'A' && a <= 'Z' || b >= 'A' && b <= 'Z')
	{
		std::cout << "대소문자";
	}
	//int i = 0 i<10 
	else
	{
		for (char q = 'a'; q <='z'; q++)
		{
			std::cout << q<< " ";
		}
	}

}

int main()
{


	input();
	output();



	return 0;

}