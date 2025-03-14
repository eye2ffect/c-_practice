#include<iostream>

int yesOrNo(int input)
{
	input = 0;

	std::cin >> input;

	if (input % 3 == 0)
	{
		std::cout << 7;
		return 7;
	}

	else if (input % 3 == 1)
	{
		std::cout<<35;

		return 35;
	}

	else if (input % 3 == 2)
	{
		std::cout << 50;

		return 50;
	}


}


int main()

{
	int input=0;

	int ret= yesOrNo(input);


	return 0;
}