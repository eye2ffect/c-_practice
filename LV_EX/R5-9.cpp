#include<iostream>


int main()
{ 
	int arr[5];

	int a = 0; int b = 0; 
	std::cin >> a >> b;
	//변하지 않은것은 첫번쨰값 
	//두번쨰값이니 a+b i+a 1+2 =3 2+2
	//
	//arr[0] = a;//하드코딩으로 a는 고정 입력으로

	for (int i = 0; i < 5; i++)
	{
		arr[i] =+ a + i * b;
		//a*2b b씩늘어남
		std::cout << " " << arr[i];

	}

	






	return 0;
}