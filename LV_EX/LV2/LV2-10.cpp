#include<iostream>

using namespace std;

int main()


{

	int input = 0; //���� 1�� �Է� ���� ����
	cin >> input; //�Է� 

	//�� ���ڰ� 3���� ũ�� 1�� ���ϰ� ��� ���ּ���. 
	if (input >3)
	{
		input++;
		cout << input << endl;


		//cout << a + 1 << endl;
		//a++ = a+1  
		//a-- = a-1
		
		//input++; input ���� 1 ���� 
		//input--; input ���� -1 ����  
		
		// int input = 5;
		// input++; // input ���� 1 ���� (��, 6�� ��) 
	}

	else

	{
		input--;
		cout << input << endl;
	}
	

	return 0;
}

