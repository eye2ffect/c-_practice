#include<iostream>

struct ABC
{
	int x;
	int y;
};

int main()
{
	//t x, int y�� �� �ִ� ����ü ABC�� ����
	//ABC ����ü ���� t�� ����
	ABC t;
	

	std::cin >> t.x >> t.y;
	std::cout << t.x + t.y;

	return 0;
}