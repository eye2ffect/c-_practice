#include<iostream>

int main()
{

	int arr[6];

	int a = 0; int b = 0;
	std::cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
	    
		     arr[i] = a + i;
			std::cout<< " " << arr[i];
	}
	// 0,1,2,3,4,5
	for (int i = 5; i >= 3; i--)
	{
		arr[i] = b-i+3 ;//arr[5]=55-0
		std::cout << " " << arr[i];
	}
	//b   i°¡ 3ÀÌ³× ? 4 5
	//55-5 +3=52   55-4+3 = 54  55-3+3 =55

	return 0;
}