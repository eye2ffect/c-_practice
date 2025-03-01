#include<iostream>

int main()

{
	int arr[3][3] = {

		{3,4,1},
		{2,1,4},
		{3,3,0}

	};

	int count = 0;//짝수
	int count2 = 0; //홀수

	//먼저순회하고,if로 조건을 걸어주고 짝홀에 그리고
	//카운터 걸어주면 될듯?

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				count++;
			}

			else
			{
				count2++;
			}

		}
	}

	 std::cout << "짝수 :" << count << std::endl;
	 std::cout << "홀수 :" << count2;



	return 0;
}