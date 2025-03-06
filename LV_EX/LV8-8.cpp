#include<iostream>

int main()
{

	char q[6] = { '#','_','#','_','#','#' };
	//문장은 끈따옴표  " " 하나더 배열을 크게
	//

	for (int i = 0; i < 6; i++)
	{
		if (q[i] == '#')
		{
			std::cout << "샵";
		}

		else if (q[i] == '_')
		{
			std::cout << "무";
		}
	}


	return 0;
}