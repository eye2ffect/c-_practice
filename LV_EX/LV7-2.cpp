#include<iostream>

int main()

{

	int a = 0; int b = 0; int num = 0;
  
	std::cin >> a >> b;

	if (a > b)//b보다 a가 큰경우
	{
		
		a - b == num;

		//왜 a-b는 대입이 되지않고 수정 vlaue 라고 뜨는가?
	    
		if (num % 2==0)
		{
			std::cout << "짝사랑만";
		}

		else
		{
			
			std::cout << "고백한다";
		}

	}

	else if (b > a)
	{
		if (num % 2 == 0)
		{
			std::cout << "짝사랑만";
		}

		else
		{
			
			std::cout << "고백한다";
		}
	}




	return 0;
}