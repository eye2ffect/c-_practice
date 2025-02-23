#include<iostream>

int main()

{
	int arr[5] = { 0 };  //증가문자
	int arr1[5] = { 0 }; //감소문자

	char a;
	std::cin >> a;

	std::cout << "(입력 문자 범위 E-V)" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = (char)(a + i);
		arr1[i] = (char)(a - i);
	   //std::cout << (int)ch; // 65 c언어에서 제공하는 형변환
       //형변환으로 입력도 바꾸어서 적용해보기 	
	}

	for (int i = 0; i < 5; i++) {
		std::cout <<(char) arr[i];//증가
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout << (char)arr1[i];//감소
	}
	std::cout << std::endl;



	return 0;
}