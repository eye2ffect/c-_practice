#include<iostream>

using namespace std;

int main()

{
	int a = 0;
	int b = 0;
	int c = 0;
    
	

	cin >> a >> b >> c;//먼저 입력받고 계산식으로 나옴 

	int d = a + b + c; //합

	int e = a * b * c; //곱

	//int d = a+b+c
	if (d >= e)
	{
		cout << "행운의 수";

	}

	else
	{
		cout << "소소한 수";
	}
/*세 수의 합이 세 수의 곱보다 같거나 크다면 행운의수 출력
 아니면 소소한 수 출력*/

  return 0;
}
