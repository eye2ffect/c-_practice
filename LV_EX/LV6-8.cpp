#include<iostream>

int main()

{
	char input ;
	std::cin >> input;
	
	//���ڿ� '' �ȿ� �ֱ�

	if (input >= '0' && input <= '9')
	{
		int t = input - '0';
		//0�ƽ�Ű �ڵ� 48 51-48
		std::cout<<t+5;
		//48~57  0-9
	}


	return 0;
}