#include<iostream>

int main()
{
	char str[3] = { "" };
	int count = 0;
	char a = 'A';

	for (int i = 0; i < 3; i++)
	{
		std::cin >> a;
		str[i] = +a;
	}


	for (int i = 0; i < 3; i++)
	{

		if (str[i] >= 'A' &&  str[i] <= 'Z')
		{
			count++;
			
		}
		
	}

	if (count == 3)
	{
		std::cout << "ǳ���ϴ�";
	}

	else if (count > 0 && count <= 2)

	{
		std::cout << "�����ϴ�";
	}

	else
	{
		std::cout << "�����ϴ�";
	}



	return 0;
}