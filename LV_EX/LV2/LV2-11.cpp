#include<iostream>

using namespace std;

int main()

{

	int num = 0;
	
	cin >> num;
	//숫자가 양수 ### 3줄 +부호
	//숫자가 음수 $$$ 2줄 -부호
	//숫자가 0이라면 출력X
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
