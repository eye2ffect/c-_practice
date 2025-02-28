#include<iostream>

void input(char ch[4][4],char a)
{
	for (int c = 0; c < 4; c++)
	{
		for (int b = 0; b < 4; b++)
		{
			ch[c][b] = a;
			
		}
		
	}
}

void output(char ch[4][4])
{
	for (int c = 0; c < 4; c++)
	{
		for (int b = 0; b < 4; b++)
		{
			
			std::cout << ch[c][b] << " ";
			
		}
		std::cout << std::endl;
	}
}



int main()
{
	char ch[4][4] = {""};

	char a = 'A'; //초기화 질문 

	std::cin >> a;

	
    input(ch, a);
	output(ch);


	return 0;
}