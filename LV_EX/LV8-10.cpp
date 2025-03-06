#include<iostream>



int main()
{
	int arr[4][4] = {
		{4,3,1,1},
		{3,1,2,1},
		{0,0,1,2}
		// {0, 0, 0, 0} 기본행 나머지 그러면 0은 6이맞다
	};

	int a = 0;
	std::cin >> a;

	int count = 0;
	//순회하면서 체크한다 
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a == 1)
			{
				if (arr[i][j] == 1)
				{

					count++;
				}
			}

			else if (a == 2)
			{
				if (arr[i][j] == 2)
				{
					count++;
				}
			}

			else if (a == 3)
			{
				if (arr[i][j] == 3)
				{
					count++;
				}

			}

			else if (a == 0)
			{
				if (arr[i][j] == 0)
				{
					count++;
				}
			}

			else if (a == 4)
			{
				if (arr[i][j] == 4)
				{
					count++;
				}
			}
		}
	}

	std::cout<<count<<"개 존재합니다";


	return 0;
}