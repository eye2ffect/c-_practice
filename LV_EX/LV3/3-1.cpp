/*논리 연산자
&&
논리식이 모두 참이면 1을 반환함. (논리 AND 연산)
|| 논리식 중에서 하나라도 참이면 1을 반환함. (논리 OR 연산)
! 논리식의 결과가 참이면 0을, 거짓이면 1을 반환함. (논리 NOT 연산)*/

// else는 나머지 else if 

#include<iostream>

int main()

{
	int a = 0;
	std::cin >> a;//입력받기 

	if (10 <= a)

	{
		std::cout << "WOW";
	}

	else
	{
		std::cout << "OMG";
	}

	return 0;
}