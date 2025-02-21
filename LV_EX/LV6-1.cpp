#include<iostream>

char arr[2];

void ABC()
{
	for (int i = 0; i < 2; i++)

	{
		std::cin >>arr[i];
	}
	

}


void OUTPUT()
{
	for (int i = 0; i < 2; i++)

	{
		std::cout<<"  "<< arr[i];
	}
}



int main()
{
	ABC();
	OUTPUT();
	return 0;
}