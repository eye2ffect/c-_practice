#include< iostream>

int main()

{
	char arr [3];

	arr[0] = 'm';
	arr[1] = 'i';
	arr[2] = 'n';
	//char arr[3] = {'m', 'i', 'n'};

	int index = 0;//�����ʱ�ȭ ���� �迭 �ʱ�ȭ���� ����
	
	std::cin >> index;

	std::cout << arr[index];

	

	return 0;
}