#include<iostream>

int main()
{

	int arr[5];

	int a = 0;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{  
		std::cin >> a;
		arr[i] =+ a;
		
		
		
	}//�迭�� �ٳֱ� ���� 
	
	
	//std::cout << sum;

	std::cout<<"����" 
	<< arr[0] + arr[1] 
    + arr[2] + arr[3] + arr[4]<<"�Դϴ�.";
	
	return 0;
}