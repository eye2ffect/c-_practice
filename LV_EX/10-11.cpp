#include<iostream>

char scorping( )
{

	int a = 0;
	std::cin >> a;

	if (a >= 90)
	{
		return 'A';
		
	}


	else if (a >= 80)
	{
		return 'B';
		
	}


	else if(a>=70)
	{
		return 'C';
		
	}

	else
	{
		return 'D';

		
	}

	return a;

}


// ������ Ȱ���ϰ� �� �ڵ��� ����
//�Լ���½� ���ο� ������ �ְ� ����Ѵ�


int main()
{
	char gra = scorping();
	std::cout << gra;



	return 0;
}