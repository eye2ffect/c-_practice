#include<iostream>

int main()
{
	int a = 0; int x = 0;
	std::cin >> a >> x;

	//std::cout << a << "���� ���� ��" << b << "���� ����ϸ� �˴ϴ�.";
	// 5         5-3 =
	for (int b = a; b >a - x; b--)
	{
		std::cout << b -1<< " ";
	}
	//ex )int 17  b =17;     14���� 17���� 14,15,16  17���λ��� ���� �������� ���


	return 0;
}