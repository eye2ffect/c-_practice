#include<iostream>

int main()
{
	char arr[3];


	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	char ch1 = arr[0];// ù����
	
	char max_char = ch1; //���� ū�Ÿ�  ù���ڷ� ����

	for (int i = 1; i < 3; i++) {
		if (arr[i] > max_char) { // ���� ���ڿ� ù���� max_char ��
			max_char = arr[i]; // �� ū ���ڰ� ������  ù���� max_char �ٲ�
		}
	}

	if (ch1 == max_char)
	{
		std::cout << "�Ǵ�" << ch1 << std::endl;
	}
	else
	{
		std::cout << "��������" << std::endl;
	}


	return 0;
}