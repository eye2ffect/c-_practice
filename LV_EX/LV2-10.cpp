#include<iostream>

using namespace std;

int main()


{

	int input = 0; //숫자 1개 입력 정수 정함
	cin >> input; //입력 

	//그 숫자가 3보다 크면 1을 더하고 출력 해주세요. 
	if (input >3)
	{
		input++;
		cout << input << endl;


		//cout << a + 1 << endl;
		//a++ = a+1  
		//a-- = a-1
		
		//input++; input 값이 1 증가 
		//input--; input 값이 -1 감소  
		
		// int input = 5;
		// input++; // input 값이 1 증가 (즉, 6이 됨) 
	}

	else

	{
		input--;
		cout << input << endl;
	}
	

	return 0;
}

