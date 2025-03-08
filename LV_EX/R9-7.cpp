#include<iostream>
struct PROJECT

{
	int num;
	char id;
	int vect[4];
};

int main()
{
	PROJECT z;//구저체 변수도 초기화?

	int a = 0;
	std::cin >> a;

	if (a > 0 && a < 10)
	{
		z.num = 5;
		z.id = 'T';
		z.vect[0] = 1;
		z.vect[1] = 2;
		z.vect[2] = 3;
		z.vect[3] = 4;
	}

	else if (a > 9 && a < 100)
	{
		z.num = 8;
		z.id = 'T';
		z.vect[0] = 5;
		z.vect[1] = 1;
		z.vect[2] = 2;
		z.vect[3] = 3;
	}

	else if (a > 99)
	{
		z.num = 10;
		z.id = 'T';
		z.vect[0] = 9;
		z.vect[1] = 1;
		z.vect[2] = 6;
		z.vect[3] = 2;
	}

	std::cout << z.num << std::endl;
	std::cout << z.id << std::endl;

	for (int i = 0; i < 4; i++)//배열로 출력 순서대로
	{
		
		std::cout << z.vect[i];
	}

	
	return 0;
}