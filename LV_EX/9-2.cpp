#include<iostream>

int main()
{

	char arr[3][5] = {
	
		{'A','B','C','D','E'},
		{'E','A','B','A','B'},
		{'A','C','D','E','R'}
	
	};

	char a='A';
	int count = 0;
	std::cin >> a;

	//2�� �迭�� 3���̻� (>=3) ������ ��쿡�� "��߰�"
	//2�� �迭�� 1~2�� �����ϴ� ��� "�߰�"
	//if���� ������ �ɾ �ذ��Ѵ�.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{  

			if(arr[i][j] == a)
			
			{
				count++;

			}
			
		}
	}

	
		if (count >= 3)
		{
			std::cout << "��߰�";
		}

		else 
		{
			std::cout << "�̹߰�";
		}



	return 0;
}