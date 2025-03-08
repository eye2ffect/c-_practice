
#include<iostream>
char q[2][3] = { "" };

char a;

int count;
int count1;

void input()
{


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> a;
            q[i][j] += a;
        }
    }
}

void findUpper()
{
    count = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (q[i][j] >= 'A' && q[i][j] <= 'Z')
            {
                count++;
            }
        }
    }

    std::cout << "대문자" << count << "개" << std::endl;
}

void findLower()
{
    count1 = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (q[i][j] >= 'a' && q[i][j] <= 'z')
            {
                count1++;
            }
        }
    }

    std::cout << "소문자" << count1 << "개";
}


int main()
{

    input();
    findUpper();
    findLower();

    return 0;
}