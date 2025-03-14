#include<iostream>

int main()

{
	char q[8] = { "" };

	


	for (int i = 0; i < 8; i++)
	{
		std::cin >> q[i];
	}

	char big[8] = { "" };

	char small[8] = { "" };

	std::cout << "big=";
	for (int i = 0; i < 8; i++)
	{
		if (q[i] >= 'A' && q[i] <= 'Z')
		{
			big[i] += q[i];
			//std::cout << big[i];
		}

		
		std::cout << big[i];
		
	}

	std::cout << std::endl;
	

	std::cout << "small=";
	for (int i = 0; i < 8; i++)
	{
	
		if (q[i] >= 'a' && q[i] <= 'z')
		{
			small[i] += q[i];

		}
		std::cout << small[i];

	}

	


	return 0;
}