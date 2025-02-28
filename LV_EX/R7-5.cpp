#include<iostream>

int main()
{
	char str[3] = { "" };
	int count = 0;
	char a = 'A';

	for (int i = 0; i < 3; i++)
	{
		std::cin >> a;
		str[i] = +a;
	}


	for (int i = 0; i < 3; i++)
	{

		if (str[i] >= 'A' &&  str[i] <= 'Z')
		{
			count++;
			
		}
		
	}

	if (count == 3)
	{
		std::cout << "풍족하다";
	}

	else if (count > 0 && count <= 2)

	{
		std::cout << "적절하다";
	}

	else
	{
		std::cout << "부족하다";
	}



	return 0;
}