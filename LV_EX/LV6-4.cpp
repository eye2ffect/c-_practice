#include<iostream>

int main()

{

	char str[6] = { '$','@','D','A','9','#' };

	for (int i = 0; i < 6; i++)
	{
		std::cout << str[i] << ":"<< static_cast<int>(str[i]) << std::endl;

		

	}



	return 0;
}