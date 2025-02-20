#include<iostream>

int main()
{
	int arr[6];
	int a = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}
	//0~2까지 입력

	std::cout << " " << std::endl;

	std::cin >> a; //a입력

	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i];
	}
	
	// K는 K+a 이부분이 많이 헷갈림 
	for (int k = 0; k < 3; k++)//K범위 까지 입력
	
	{   
		arr[k] = k + a;
		std::cout<< arr[k];
	}
	
	

	return 0;
}