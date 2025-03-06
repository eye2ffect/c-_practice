#include<iostream>

int main()
{
	int arr[6][3] = { 0 };

	int a = 0; int b = 0;

	std::cin >> a >> b;
   

	 //0,0 ~2,2 까지 a값
	//3,0 ~ 5,2까지 b값
	for (int j = 0; j < 6; j++)
	{
		std::cout << std::endl;

		for (int i = 0; i < 3; i++)
		{
			  
			
			if (i < 3)
			{
				arr[j][i] += a;
			   
			}
			else
			{
				arr[j][i] += a;

			}
				
			


			std::cout << arr[j][i];
			
		}
	}


	return 0;
}