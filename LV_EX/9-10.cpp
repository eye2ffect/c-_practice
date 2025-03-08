#include<iostream>

void checkChar(char check)
{
	if (check >= 'A' && check <= 'Z')
	{
		std::cout << "대";
	}

	else if (check >= 'a' && check <= 'z')
	{
		std::cout << "소";
	}



}

int main()
{
	char q[5] = { " " };

	

	for (int i = 0; i < 5; i++)
	{
		std::cin >> q[i];
		
	
	}

	for (int i = 0; i < 5; i++)
	{
		

		checkChar(q[i]);
		//call by valude로 보내준다
	}
	


	return 0;
}