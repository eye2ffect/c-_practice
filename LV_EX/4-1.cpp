#include <iostream>

int main() {
	int arr[5] = { 1,2,3,4,5 };

	

	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	//�Է���  �迭 ���� �� �Է� ����� �Ҳ��߶�� ����  
	//�迭�� �ణ �������� ���ø� ���� ���ذ� �ߵǴ°� ���� 
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i]; // i���� �ε����� Ȱ��
	}
	return 0;
}