#include<iostream>

int main()
{
	char arr[3];


	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	char ch1 = arr[0];// 첫문자
	
	char max_char = ch1; //가장 큰거를  첫문자로 지정

	for (int i = 1; i < 3; i++) {
		if (arr[i] > max_char) { // 현재 문자와 첫문자 max_char 비교
			max_char = arr[i]; // 더 큰 문자가 있으면  첫문자 max_char 바꿈
		}
	}

	if (ch1 == max_char)
	{
		std::cout << "옳다" << ch1 << std::endl;
	}
	else
	{
		std::cout << "옳지않음" << std::endl;
	}


	return 0;
}