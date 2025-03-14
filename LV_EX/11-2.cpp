#include<iostream>
int sum(int a,int b)
{

	return a + b;
}

int comp(int a,int b)
{

	return a - b;
}

void print(int t1, int t2)
{
	

	std::cout << " ÇÕ:"<< t1<<std::endl;
	std::cout << " Â÷:" << t2 << std::endl;

}


int main()
{

	int c = 0;
	int d = 0;

	std::cin >> c >> d;

	int sum1 = sum(c, d);
	int min =  comp(c,  d);

	print(sum1, min);




	return 0;
}