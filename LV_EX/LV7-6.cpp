#include<iostream>

int main()

{
	int arr[4] = { 0 };

	int a = 0; 

	for (int i = 0; i < 4; i++)
	{
		std::cin >> a;
		arr[i] = +a;
	}

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] < 20)
		{
			std::cout << "더 큰수를 입력하세요";
		}

		if (arr[i] > 20)
		{
			std::cout << "더 작은수를 입력하세요";
		}

		 if (arr[i] == 20)
		{
			std::cout << "정답입니다";
		}

		 std::cout << std::endl;
		 std::cout << std::endl;
	}

	return 0;
}