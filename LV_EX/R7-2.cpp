#include<iostream>
int vect[6];
int a,b,c;

int main()
{
	//���� ������ ����Ͽ� ���� �迭
	
	
    std::cin >> a>>b>>c;
	

	for (int x = 0; x < 6; x++)

	{

		vect[x] = 0; //for���� ���鼭 ��ĭ�� 0���� ä�����ϴ�.

	}
	
	vect[a] = 1; ; vect[b] = 1; vect[c] = 1;


	for (int x = 0; x < 6; x++)

	{

		std::cout << vect[x];

	}



	return 0;
}