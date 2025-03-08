#include<iostream>

struct ABC
{
	int x;
	int y;
};

int main()
{
	//t x, int y가 들어가 있는 구조체 ABC를 정의
	//ABC 구조체 변수 t를 선언
	ABC t;
	

	std::cin >> t.x >> t.y;
	std::cout << t.x + t.y;

	return 0;
}