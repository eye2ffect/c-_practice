#include<iostream>

int main()
{
    int i = 1;
    int n = 0;

    std::cin >> n;

    while (i <= n)//1부터 n까지 반복한다.
    {
        std::cout << i << " ";
        i++;
    }

    //for(int i = 1; i<=a; i++)

    return 0;
}