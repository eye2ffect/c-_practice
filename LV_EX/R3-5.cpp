#include<iostream>

int main()

{
	int a, b, c;
	std::cin >> a >> b >> c;
	//ù ��°�� �Է� ���� ���ڰ� ������ ���� 2�� ���� ū ����

	if (a >= b && a >= c)
	{
		std::cout << "MAX�߰�";
	}

	else
		std::cout << "MAX�ƴ�";

	return 0;
}