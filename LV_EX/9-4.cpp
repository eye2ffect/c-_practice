#include<iostream>

int main()
{

	int arr[6] = { 3,4,2,5,7,9 };

	int a = 0; int b = 0;
	//�ʱ�ȭ�� �������� ���ϸ� �޸� �ջ�
	std::cin >> a >> b;

	int temp;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

	//�̹� �ٲ�����̴ϱ� �迭����
	//�׷��ϱ� ��µ� �޶����°��̴�

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i];
	}









	return 0;
}