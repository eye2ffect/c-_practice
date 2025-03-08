#include<iostream>

int main()
{

	char a[3][3] = { " " };

	int num = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 3; j++)
		{  
			

			a[i][j] = 'A'+ num;
			//숫자로 바꾸면 1부터해서 sum
			//으로 계산하면됨 아스키코드 활용
			num++;

			//std::cout << a[i][j];
		}
	}

	// A ~ I까지 값을 2중 for문을 돌려 채워

	int x1, y1, x2, y2;

	std::cin >> x1 >> y1 >> x2 >> y2;

	int temp;

	temp = a[x1][y1];
	
	a[x1][y1] = a[x2][y2];
	
	a[x2][y2] = temp;
	/*
	temp = a;
    a = b;
    b = temp;
	
	*/
	//이미 x,y자표 배열값은 위치가 달라지니까
	// 그위치만 swap되서 출력된다 9-4와 같은원리

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;

		for (int j = 0; j < 3; j++)
		{
			std::cout << a[i][j];
		}
	}



	return 0;
}