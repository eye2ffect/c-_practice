#include<iostream>

int main()
{
	int a;
	std::cin >> a; //입력받기

	// 조건에서 입력받고 반복으로 시행?
	// 반복되는건 +2 추가후 반복됨
	// for문에서 조건을 넣어서 시작하면 한줄로 가능
	// 첨은 +2 로시작 출력 반복은  +4까지임
	// 변하지 않는건 입력받은 a의 값

	for (int x = a + 2; x <= a + 4; x++)
	{
		std::cout << x << " ";
	}


	return 0;
}