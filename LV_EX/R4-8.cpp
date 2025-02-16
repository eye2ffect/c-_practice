#include<iostream>

int main()
{
	int arr[6] = { 0,0,0,0,0,0 };
	//어차피 0으로 초기화 해야함
	int x = 0;

	std::cin >> x;
	//6번 반복
	for (int i = 0; i <6; i++)
	{
		arr[i] = x + i;
		std::cout << arr[i]<< " ";
		
	}

	return 0;
}