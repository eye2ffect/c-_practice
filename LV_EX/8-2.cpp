#include<iostream>

int main()
{
    int arr[6] = {};

    int a = 0;

    for (int i = 0; i < 6; i++)
    {
        std::cin >> a;
        arr[i] += a;
    }

    for (int i = 0; i < 6; i++)
    {

        if (arr[i] == 7)
        {

            break;
        }
        std::cout << arr[i] << " ";

    }




    return 0;
}