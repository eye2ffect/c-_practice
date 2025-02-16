#include<iostream>

int main()
{
	int arr[10] = { 5,25,54,2,-33,57,82,-8,13,1 };
	//0,1,2,3,4,5,6,7,8,9 부터 이순서대로 인덱스 순서 기억
	int index = 0;
	std::cin >> index; //인덱스 입력
	//인덱스를 입력받고 인덱스 포함해서 수를 넣고 출력
	//범위는 9까지 지정되어있음 
	for (int x = index; x <= 9; x++)
	{
		std::cout << arr[x];

	}

	return 0;
}