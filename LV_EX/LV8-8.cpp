#include<iostream>

int main()
{

	char q[6] = { '#','_','#','_','#','#' };
	//������ ������ǥ  " " �ϳ��� �迭�� ũ��
	//

	for (int i = 0; i < 6; i++)
	{
		if (q[i] == '#')
		{
			std::cout << "��";
		}

		else if (q[i] == '_')
		{
			std::cout << "��";
		}
	}


	return 0;
}