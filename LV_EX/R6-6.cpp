#include<iostream>

int x;
char Q  = 0;

int main()

{
	char ch[5] = { 0 };
	
	for (int i = 0; i < 5; i++)
	{
		std::cin >> Q;
		ch[i]=+Q;
	}
	

	int count= 0 ;

	for (x = 0; x < 5; x++)

	{

		if (ch[x] >= '0' && ch[x] <= '9')

		{

			count++;
			
		}

	}
	
	if ( Q>= '0' && Q <= '9')
	{
		std::cout << "숫자" << count << "개발견";
	}
	
	else
	{
		std::cout << "숫자 미발견";
	}



	return 0;
}