#include<iostream>

int main()
{
	int arr[6] = { 0 };//���迭 �ʱ�ȭ

	int a = 0;  int b = 0; int t = 0;
	
	std::cin >> a >> b;

	for( int i = 0; i<=b-a; i++)
	{    

		 t = a + i;
		 arr[i] =+t; //a�������� ��°���
		 std::cout << arr[i];
	}


	return 0;
}