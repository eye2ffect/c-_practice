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
		std::cout << "�߰�";
	}
	else
	{
		std::cout << "�̹߰�";
	}

}


int main()
{   
	//���ο� int �߰��ش޶�� ����
	char str = 'A';
	std::cin >> str;

	findCh(str);


	return 0;
}