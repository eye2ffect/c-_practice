#include<iostream>

int GOP()

{
	int a = 0; int b = 0;
	std::cin >> a >> b;

	return a * b;
}

int SUM()

{
	int a = 0; int b = 0;

	std::cin >> a >> b;

	return a + b;
}


int main()
{   
	

	int c=GOP();
	int d =SUM();

	if (c > d)
	{
		std::cout << "GOP>SUM";
	}

	else if(c<d)
	{
		std::cout << "GOP<SUM";
	}

	else
	{
		std::cout << "GOP==SUM";
	}




	return 0;
}