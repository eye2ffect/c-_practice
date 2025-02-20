#include<iostream>

int main()
{
	int arr[6] = { 0 };//모든배열 초기화

	int a = 0;  int b = 0; int t = 0;
	
	std::cin >> a >> b;

	for( int i = 0; i<=b-a; i++)
	{    

		 t = a + i;
		 arr[i] =+t; //a범위부터 출력가능
		 std::cout << arr[i];
	}


	return 0;
}