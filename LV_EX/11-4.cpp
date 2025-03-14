#include<iostream>

int main()
{
	char a = 'A';
	char b = 'B';
	char c = 'C';

	std::cin >> a >> b >> c;

	char* ptr1 = &a;
	char* ptr2 = &b;
	char* ptr3 = &c;

	(*ptr1)++;//가르킨 a의 정수값에 결국 1을 더한것
	//( *ptr2 ) = 100; 이거는 100을 더한거 
	(*ptr2)++;
	//(*ptr3) = 'B'; 기존문자열에서B로 교체된것 
	(*ptr3)++;

	std::cout << *ptr1 << " " << *ptr2 << " " << *ptr3;



	return 0;
}