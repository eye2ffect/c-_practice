#include<iostream>

int main()
{
    int arr[3][3] = {
       {10,3,20},
       {60,30,40},
       {20,30,40}
    };

    int a = 0; int b = 0; int count = 0;
    std::cin >> a >> b;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] >= a && b >= arr[i][j])
            {
                count++;
            }
        }
    }

    std::cout << count;

    return 0;
}