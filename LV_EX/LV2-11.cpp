#include<iostream>

using namespace std;

int main()

{

	int num = 0;
	
	cin >> num;
	//���ڰ� ��� ### 3�� +��ȣ
	//���ڰ� ���� $$$ 2�� -��ȣ
	//���ڰ� 0�̶�� ���X
	if (num > 0)
	{
		cout << "###" << endl;
		cout << "###" << endl;
		cout << "###" << endl;
	}

	
	if (num < 0)
	{
		cout << "$$$" << endl;
		cout << "$$$" << endl;
	}
	

	return 0;
}
