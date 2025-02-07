#include<iostream>

using namespace std;

int main()
{

	int a = 0; int b = 0; //변수 두개 받기 초기화 

	cin >> a >> b; // 변수 입력받기 

	//계산기 부분 
	cout << a << "+" << b << " = " << a + b << endl;

	cout << a << "*" << b << " = " << a * b <<endl;

	cout << a << "/" << b << " = " << a / b <<endl;
	
	return 0;
}
