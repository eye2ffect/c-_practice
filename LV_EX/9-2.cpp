#include<iostream>

int main()
{

	char arr[3][5] = {
	
		{'A','B','C','D','E'},
		{'E','A','B','A','B'},
		{'A','C','D','E','R'}
	
	};

	char a='A';
	int count = 0;
	std::cin >> a;

	//2차 배열에 3개이상 (>=3) 존재할 경우에는 "대발견"
	//2차 배열에 1~2개 존재하는 경우 "발견"
	//if문을 조건을 걸어서 해결한다.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{  

			if(arr[i][j] == a)
			
			{
				count++;

			}
			
		}
	}

	
		if (count >= 3)
		{
			std::cout << "대발견";
		}

		else 
		{
			std::cout << "미발견";
		}



	return 0;
}