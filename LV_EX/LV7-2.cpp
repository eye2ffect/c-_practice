#include<iostream>

int main()

{

	int a = 0; int b = 0; int num = 0;
  
	std::cin >> a >> b;

	if (a > b)//b���� a�� ū���
	{
		
		a - b == num;

		//�� a-b�� ������ �����ʰ� ���� vlaue ��� �ߴ°�?
	    
		if (num % 2==0)
		{
			std::cout << "¦�����";
		}

		else
		{
			
			std::cout << "����Ѵ�";
		}

	}

	else if (b > a)
	{
		if (num % 2 == 0)
		{
			std::cout << "¦�����";
		}

		else
		{
			
			std::cout << "����Ѵ�";
		}
	}




	return 0;
}