#include<iostream>

int main()
{
	int a = 0; int x = 0;
	std::cin >> a >> x;

	//std::cout << a << "보다 작은 수" << b << "개를 출력하면 됩니다.";
	// 5         5-3 =
	for (int b = a; b >a - x; b--)
	{
		std::cout << b -1<< " ";
	}
	//ex )int 17  b =17;     14부터 17까지 14,15,16  17본인빼고 부터 범위까지 출력


	return 0;
}