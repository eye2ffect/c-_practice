#include<iostream>
char q[2][3] = {
	{'F','E','W'},
    {'D','C','A'}
};

void findCh(char target)
{
	int a = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (q[i][j] == target)
			{
				a++;
			}

		}
	}

	if (a > 0)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}

}


int main()
{   
	//메인에 int 추가해달라고 안함
	char str = 'A';
	std::cin >> str;

	findCh(str);


	return 0;
}