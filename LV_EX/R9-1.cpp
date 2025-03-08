#include <iostream>

int main()
{

    int arr[5] = { 2,1,2,4,5 };

    int arr1[3][3] = {
      {2,5,3},
      {4,5,7},
      {8,7,2}
    };

    int a = 0;
    int count = 0;
    std::cin >> a;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == a)
        {
            count++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr1[i][j] == a)
            {
                count++;
            }
        }
    }

    std::cout << count;


    return 0;
}