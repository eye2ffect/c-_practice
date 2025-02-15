#include<iostream>

int main()
{
	int b = 0;
	std::cin  >> b; //입력만 인덱스든 머든 
	int a[5] = { 4,1,3,6,9 };

	
	std::cout << b << "번index의 값은" << a[b] << "입니다.";

	return 0;
}