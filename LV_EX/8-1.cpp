#include<iostream>

int main()
{
    int i = 1;
    int n = 0;

    std::cin >> n;

    while (i <= n)//1���� n���� �ݺ��Ѵ�.
    {
        std::cout << i << " ";
        i++;
    }

    //for(int i = 1; i<=a; i++)

    return 0;
}