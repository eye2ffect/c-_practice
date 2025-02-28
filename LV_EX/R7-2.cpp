#include<iostream>
int vect[6];
int a,b,c;

int main()
{
	//지역 변수를 사용하여 만든 배열
	
	
    std::cin >> a>>b>>c;
	

	for (int x = 0; x < 6; x++)

	{

		vect[x] = 0; //for문을 돌면서 한칸씩 0으로 채워집니다.

	}
	
	vect[a] = 1; ; vect[b] = 1; vect[c] = 1;


	for (int x = 0; x < 6; x++)

	{

		std::cout << vect[x];

	}



	return 0;
}