#include<iostream>

int main()

{
	int a = 0;//¦����
	int b = 0; //Ȧ���� 

	int arr[3][3] =
	{
		{3,4,1},
		{2,1,4},
		{3,3,0}
	};

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			if (arr[a][b] % 2 == 0)
			{
				a += arr[a][b];
			}
			else {
				b += arr[a][b];
			}
		   
		}
		
	}

	std::cout <<"¦�� : " << a;
	std::cout << "Ȧ�� : " << b;



	return 0;
}