#include<iostream>

int main()
{
	int arr[6] = { 0,0,0,0,0,0 };
	//������ 0���� �ʱ�ȭ �ؾ���
	int x = 0;

	std::cin >> x;
	//6�� �ݺ�
	for (int i = 0; i <6; i++)
	{
		arr[i] = x + i;
		std::cout << arr[i]<< " ";
		
	}

	return 0;
}