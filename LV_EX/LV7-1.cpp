#include<iostream>

int main()

{

	int arr[5] = { 3,5,2,4,1 };

	int arr2[3][2] =
	{
		//ù��°�� ������ ũ��,�ι�°�� ������ ũ��


		{9,8},
		{7,1},
		{3,4}

	};

	int t = 0;
	std::cin >> t;

	if (t % 2 == 0) {
		//¦��
		for (int a = 0; a < 3; a++)
		{
			for (int b = 0; b < 2; b++)
			{
				std::cout << arr2[a][b] << " ";
			}
			 std::cout << std::endl;
		}
	   
	}

	else
	{
      //Ȧ��
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i];
		}

	}




	return 0;
}
