#include<iostream>

int main()

{

	int a = 0;
	std::cin >> a;

	int arr[5] = { 5,5,5,5,5 };

	for (int i = 0; i <= 4; i++)
	{

		std::cout << a + arr[i]; // i���� �ε����� Ȱ��

	}




	return 0;
}