#include<iostream>

int main()

{
	int arr[3][3] = {

		{3,4,1},
		{2,1,4},
		{3,3,0}

	};

	int count = 0;//¦��
	int count2 = 0; //Ȧ��

	//������ȸ�ϰ�,if�� ������ �ɾ��ְ� ¦Ȧ�� �׸���
	//ī���� �ɾ��ָ� �ɵ�?

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				count++;
			}

			else
			{
				count2++;
			}

		}
	}

	 std::cout << "¦�� :" << count << std::endl;
	 std::cout << "Ȧ�� :" << count2;



	return 0;
}