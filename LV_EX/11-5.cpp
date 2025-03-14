#include<iostream>



int main()

{
	int a = 0; int b = 0;

	std::cin >> a>>b;

	int* p = &a;//포인터형으로 각각 ab를 가르킨다 
	int* t = &b;

	int temp = *p;
	*p = *t;
	*t = temp;

	std::cout << a << " " << b;

	return 0;
}

