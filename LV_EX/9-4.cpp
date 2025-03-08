#include<iostream>

int main()
{

	int arr[6] = { 3,4,2,5,7,9 };

	int a = 0; int b = 0;
	//초기화에 대한질문 안하면 메모리 손상
	std::cin >> a >> b;

	int temp;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

	//이미 바뀐상태이니까 배열값이
	//그러니까 출력도 달라지는것이다

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i];
	}









	return 0;
}