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
		//+= 앞 변수에 뒤의 값을 더하기
	}

	for (int i = 0; i <5; i++)
	{
		if (arr[i] >= 70)
		{
			std::cout <<i+1<<"번사람은"<<arr[i]<<"점"<< "PASS";
		}

		else if (arr[i] >= 50)
		{
			std::cout << i + 1 << "번사람은" << arr[i] << "점" << "RESET";
		}


		else if(arr[i]<50)
		{
			std::cout << i + 1 << "번사람은" << arr[i] << "점"<< "FAIL";
		}

		std::cout << std::endl;
		std::cout << std::endl;

	}


	return 0;
}