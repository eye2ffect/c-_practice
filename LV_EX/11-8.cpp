#include<iostream>

int main()

{

	char str[14] = { "StructPointer" };

	int flag = 0;

	char a = 'A';

	std::cin >> a;

	for (int i = 0; i < 14; i++)
	{
		if (str[i] == a)
		{
			flag = 1;
		}
	}

	if (flag == 1)
	{
		std::cout << "�߰�";
	}
	else
	{
		std::cout << "�̹߰�";
	}




	return 0;
}