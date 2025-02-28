#include<iostream>

int a = 0;


void BBQ()

{
	if (0 < a && a< 5)
	{
		std::cout << "초기값";
    }

     else if (6 < a && a< 10)
	{
		std::cout << "중간값";
	}

	else
	{
		std::cout << "알수없는값";
	}

}



int main()
{
	
	std::cin >> a;

	if (a == 3 || a == 7 || a==5)
	{
		for (int i = 1; i < 11; i++)
		{
			std::cout << i << " ";
		}
	}

	else if (a == 0 || a == 8)
	{
		for (int i = 10; i >= 1; i--)
		{
			std::cout << i << " ";
		}
	}

	else
	{
		BBQ();
	}



	return 0;
}