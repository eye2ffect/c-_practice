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
		
		
		
	}//배열에 다넣기 성공 
	
	
	//std::cout << sum;

	std::cout<<"합은" 
	<< arr[0] + arr[1] 
    + arr[2] + arr[3] + arr[4]<<"입니다.";
	
	return 0;
}