#include<iostream>

int main()

{
	int arr[5] = { 0 };  //��������
	int arr1[5] = { 0 }; //���ҹ���

	char a;
	std::cin >> a;

	std::cout << "(�Է� ���� ���� E-V)" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = (char)(a + i);
		arr1[i] = (char)(a - i);
	   //std::cout << (int)ch; // 65 c���� �����ϴ� ����ȯ
       //����ȯ���� �Էµ� �ٲپ �����غ��� 	
	}

	for (int i = 0; i < 5; i++) {
		std::cout <<(char) arr[i];//����
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout << (char)arr1[i];//����
	}
	std::cout << std::endl;



	return 0;
}