#include<iostream>

int main()
{
	int arr[6];
	int a = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}
	//0~2���� �Է�

	std::cout << " " << std::endl;

	std::cin >> a; //a�Է�

	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i];
	}
	
	// K�� K+a �̺κ��� ���� �򰥸� 
	for (int k = 0; k < 3; k++)//K���� ���� �Է�
	
	{   
		arr[k] = k + a;
		std::cout<< arr[k];
	}
	
	

	return 0;
}