#include<iostream>

int main()
{

	int a = 0;

	int arr[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		std::cin >> a;
		arr[i] += a;
	}

	for(int i = 0; i < 6; i++)
	{
		if (arr[i] < 5)
		{
			std::cout<<i<<"���� "<<arr[i]<< "�� ���հ�" << std::endl;
		}

		else if (arr[i] >= 5)
		{
			std::cout<<i<<"���� "<<arr[i] << "�� �հ�" << std::endl;;
		}
	}



	return 0;
}