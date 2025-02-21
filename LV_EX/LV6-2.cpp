#include<iostream>

int main()
{
	char ch[3];

	for (int i = 0; i < 3; i++)

	{
		std::cin >> ch[i];
		//ch[i] = +(int)ch;
	}

	for (int i = 0; i < 3; i++)
	{

		
		//static_cast<int>(ch);잘못되었다고 뜬다
		std::cout << static_cast<int>(ch[i])<<std::endl;
		//전체를 기입
	}

	

	return 0;
}