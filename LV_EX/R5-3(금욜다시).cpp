#include<iostream>

void PrintAll()
{  
	int a = 0; int b = 0;

	int arr1[5] = { 1,2,3,4,5 };
	
	int arr2[5] = { 1,2,3,4,5 };

	std::cin >> a >> b;
	
	// 0,1,2,3,4 ���� 5�� �ݺ��� �´°� 

	for (int i = 0; i <5; i++)
	{
		arr1[i] = a;
	}
	//�迭�� i������ 
	
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = b;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i];
	}

	

}


int main()
{

	PrintAll();

	return 0;
}