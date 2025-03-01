#include<iostream>

int main()

{

	int a = 0; int b = 0; int num = 0;
  
	std::cin >> a >> b;

	if (a > b)//b보다 a가 큰경우
	{
		
		num = a - b;

		//왜 a-b는 대입이 되지않고 수정 vlaue 라고 뜨는가?
	    //왼쪽값은 대입만 되며 연산자 수행이 어려움
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
		num = b - a;

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