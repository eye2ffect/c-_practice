#include<iostream>

int main()

{
	int a = 0;//Â¦¼öÇÔ
	int b = 0; //È¦¼öÇÕ 

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

	std::cout <<"Â¦¼ö : " << a;
	std::cout << "È¦¼ö : " << b;



	return 0;
}