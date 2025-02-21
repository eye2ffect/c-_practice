#include<iostream>

int main()

{
	char input ;
	std::cin >> input;
	
	//문자열 '' 안에 넣기

	if (input >= '0' && input <= '9')
	{
		int t = input - '0';
		//0아스키 코드 48 51-48
		std::cout<<t+5;
		//48~57  0-9
	}


	return 0;
}