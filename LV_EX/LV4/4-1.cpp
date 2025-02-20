#include <iostream>

int main() {
	int arr[5] = { 1,2,3,4,5 };

	

	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	//입력을  배열 원룸 너 입력 여기로 할꺼야라고 말함  
	//배열은 약간 원룸으로 예시를 들어야 이해가 잘되는거 같음 
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i]; // i값을 인덱스로 활용
	}
	return 0;
}