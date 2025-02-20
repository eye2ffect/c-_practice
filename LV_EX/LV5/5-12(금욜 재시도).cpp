#include<iostream>

void QTR()
{
	std::cout << "QTR100%" << std::endl;
}

void BBQ()
{
	std::cout << "BBQ100%" << std::endl;
}

int main()

{
	int arr[3] = { 1,2,3 };

	int sum = 0;

	for (int i = 0; i <= 2; i++)
	{
		std::cin >> arr[i];
	} //3회입력

	for (int i=0; i <= 2; i++)
	{
		std::cout << arr[i];
	}//3회출력
	
	for (int i = 0; i <= 2; i++)
	{
		sum += arr[i];
	}

	if (sum >= 10)
	{
		QTR();
	}

	else
	
	{
		BBQ();
	}

	return 0;
}