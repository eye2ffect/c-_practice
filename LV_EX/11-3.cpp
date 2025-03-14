#include<iostream>

int main()
{
	int a = 0;
	char gd = 'A';

	std::cin >> a >> gd;

	int *p = &a;
	//int형의 포인터 P를 선언하고
	//a를 가르킨다 
	char *t = &gd;

	std::cout << *p << " " << *t;
	//포인터 변수 출력
	return 0;

}