#include<iostream>

char scorping( )
{

	int a = 0;
	std::cin >> a;

	if (a >= 90)
	{
		return 'A';
		
	}


	else if (a >= 80)
	{
		return 'B';
		
	}


	else if(a>=70)
	{
		return 'C';
		
	}

	else
	{
		return 'D';

		
	}

	return a;

}


// 리턴을 활용하고 더 코드라고 생각
//함수출력시 새로운 변수를 넣고 출력한다


int main()
{
	char gra = scorping();
	std::cout << gra;



	return 0;
}