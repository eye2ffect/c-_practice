#include<iostream>

int main()
{
	char arr[3][5] = { "" };
	
	char a = 'A';

	std::cin >> a;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] =+ a+ (i * 5+ j );
			//Çà¸¸Å­ °öÇá¢ž¤¾ 1À» ´õÇÏ¸é ´ã 
		}
	}
	 
	 arr[2][2] = arr[2][2] + 32;
	
	 std::cout << arr[2][2] ;
		

	//arr[2][2] = arr[2][2] - 32;


	return 0;
}