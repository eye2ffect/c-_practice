#include< iostream>

int main()

{
	char arr [3];

	arr[0] = 'm';
	arr[1] = 'i';
	arr[2] = 'n';
	//char arr[3] = {'m', 'i', 'n'};

	int index = 0;//변수초기화 이유 배열 초기화역시 질문
	
	std::cin >> index;

	std::cout << arr[index];

	

	return 0;
}