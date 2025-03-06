#include<iostream>

int main()

{
	char arr[3][6] = { "" };
	
	char a = 'A';
	char b = 'B';

	std::cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;

		for (int j = 0; j < 6; j++)
		{
			if (j < 4) {
				arr[i][j] = a;  
			}
			else {
				arr[i][j] = b;  
			}
				

			

			std::cout << arr[i][j];



		}

	}



	return 0;
}