#include<iostream>

// ���� ���� a
int a = 0;

void KFC()
{

	
	std::cin >> a;

}

void BBQ()

{
	if (a > 5)
	{
		std::cout << "����";
	}

	else
	{
		std::cout << "�ٽ�";
	}

}



int main()

{

	KFC();
	BBQ();

	return 0;
}