#include<iostream>

int main()
{

	int arr[4] = { 1,2,3,4 };

	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

	int sum = 0;
   
	for (int i = 0; i <= 3; i++)

	{
		sum = sum + arr[i];//sum�� ���ϸ鼭 �������� �ݺ�
	}

	std::cout << sum;

	return 0;
}