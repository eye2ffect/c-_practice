#include<iostream>

int main()
{
	int arr[7] = { 3,4,1,3,2,7,3 };

	int flag = 0;
	int a = 0;
	std::cin >> a;
	// flag방식으로 문제를 풀어

	//몇 개인지 셀때는 Counting
	//존재여부를 검사할때는 Flag

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == a)
		{
			flag = 1;
			break;
		}

	}//맞는거 찾을떄 까지 반복

	if (flag == 1)
	{
		std::cout << "발견";
	}

	else
	{
		std::cout << "미발견";
	}


	return 0;
}