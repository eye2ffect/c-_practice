#include<iostream>

int main()
{
	int arr[7] = { 3,4,1,3,2,7,3 };

	int flag = 0;
	int a = 0;
	std::cin >> a;
	// flag������� ������ Ǯ��

	//�� ������ ������ Counting
	//���翩�θ� �˻��Ҷ��� Flag

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == a)
		{
			flag = 1;
			break;
		}

	}//�´°� ã���� ���� �ݺ�

	if (flag == 1)
	{
		std::cout << "�߰�";
	}

	else
	{
		std::cout << "�̹߰�";
	}


	return 0;
}