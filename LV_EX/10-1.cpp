#include<iostream>

int main()
{
	int arr[4][4] = {0};

	int a = 0;

	int num = 1;
	std::cin >> a;

	if (a % 2 == 0)
	{
		
		for (int i = 0; i < 4; i++)
		
		{
			arr[i][i] += num;
			arr[i][i] += i;
	    }
		
		for (int i = 0; i < 4; i++)
		{
			std::cout << std::endl;

			for (int j = 0; j < 4; j++)
			{
				std::cout << arr[i][j];
			}

		}

	}
	
	else
	{
		int  y = 3;

		for (int i = 0; i < 4; i++)

		{
			
			arr[i][y] += num;
			arr[i][y] += i;
			y--;
		}

		for (int i = 0; i < 4; i++)
		{
			std::cout << std::endl;

			for (int j = 0; j < 4; j++)
			{
				std::cout << arr[i][j];
			}

		}

	}


	return 0;
}

/*
10-1 풀이

0,0 0,1 0,2 0,3   0,0 =1  1,1=2  2,2=3  3,3=4
1,0 1,1 1,2 1,3
2,0 2,1 2,2 2,3
3,0 3,1 3,2 3,3

0,0 0,1 0,2 0,3   0,3 =1  1,2=2  2,1=3  3,0=4
1,0 1,1 1,2 1,3
2,0 2,1 2,2 2,3
3,0 3,1 3,2 3,3
x좌표는 늘어나는데  y좌표는 줄어든다 
새로운 변수를 추가해서 규칙수정

*/