#include<iostream>

void KFC()

{
	int arr[5] ;

	int a = 0;
	std::cin >> a;

	for (int i = 0; i <5; i++)
	{
		arr[i]= a-i;
		std::cout << arr[i];
	}


}



int main()
{

	KFC();

	return 0;
}