#include<iostream>


int main()
{ 
	int arr[5];

	int a = 0; int b = 0; 
	std::cin >> a >> b;
	//������ �������� ù������ 
	//�ι������̴� a+b i+a 1+2 =3 2+2
	//
	//arr[0] = a;//�ϵ��ڵ����� a�� ���� �Է�����

	for (int i = 0; i < 5; i++)
	{
		arr[i] =+ a + i * b;
		//a*2b b���þ
		std::cout << " " << arr[i];

	}

	






	return 0;
}