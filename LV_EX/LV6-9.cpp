#include<iostream>

int main()

{
	char ch;
	std::cin >> ch;

	for (int x = 'A'; x <= ch; x++)
	{
		std::cout << (char)(x);
		//���� ��ȯ��

	}
 

	return 0;
}