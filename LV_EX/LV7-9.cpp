#include<iostream>

int main()
{
	int arr[5] = { 0 };

	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> a;
		arr[i] =+ a;
		//=+ a=+100
		//+= �� ������ ���� ���� ���ϱ�
	}

	for (int i = 0; i <5; i++)
	{
		if (arr[i] >= 70)
		{
			std::cout <<i+1<<"�������"<<arr[i]<<"��"<< "PASS";
		}

		else if (arr[i] >= 50)
		{
			std::cout << i + 1 << "�������" << arr[i] << "��" << "RESET";
		}


		else if(arr[i]<50)
		{
			std::cout << i + 1 << "�������" << arr[i] << "��"<< "FAIL";
		}

		std::cout << std::endl;
		std::cout << std::endl;

	}


	return 0;
}