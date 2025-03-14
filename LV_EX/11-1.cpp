#include<iostream>

int input()

{
	int num = 0;
	
	std::cin >> num;

	return num;
}

int cals(int set ,int set1 ,int set2)
{

	
	
	return (set + set1 + set2) / 3;

}

int main()

{
	int a = input();
	int b = input();
	int c= input();
	
	
	
	
	
	

	int result =  cals(a, b, c);

	std::cout << result;


	return 0;
}