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
			//���ڷ� �ٲٸ� 1�����ؼ� sum
			//���� ����ϸ�� �ƽ�Ű�ڵ� Ȱ��
			num++;

			//std::cout << a[i][j];
		}
	}

	// A ~ I���� ���� 2�� for���� ���� ä��

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
	//�̹� x,y��ǥ �迭���� ��ġ�� �޶����ϱ�
	// ����ġ�� swap�Ǽ� ��µȴ� 9-4�� ��������

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