#include<iostream>



void KFC(char c)//짝수 문자출력
{
    for (int i = 0; i < 7; i++)
    {
        std::cout << c;
    }
}

void BBQ(int c)//홀수 숫자 범위출력
{
    for (int i = 1; i <= c; i++)
    {
        std::cout << i;
    }
}


int main()
{
    int a = 0;
    int b = 0;
    char e = 'A';
    std::cin >> a;

    if (a % 2 == 0)//짝수
    {

        std::cin >> e;
        KFC(e);

    }
    else
    {
        //홀수
        std::cin >> b;
        BBQ(b);
    }


    return 0;
}