#include<iostream>

int main()

{

	//�����Ģ 2�� ���� ���� ���� ���� 5������

	int a = 0;
	std::cin >> a;


	//std::cout << "1";
	//a=a+1 ;   x= x+1 

	for (int x = 1; x <= a++; x++)
	{


		std::cout << x++ << " ";

	}

	return 0;
}