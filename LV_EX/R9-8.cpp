#include<iostream>



void KFC(char c)//¦�� �������
{
    for (int i = 0; i < 7; i++)
    {
        std::cout << c;
    }
}

void BBQ(int c)//Ȧ�� ���� �������
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

    if (a % 2 == 0)//¦��
    {

        std::cin >> e;
        KFC(e);

    }
    else
    {
        //Ȧ��
        std::cin >> b;
        BBQ(b);
    }


    return 0;
}