#include<iostream>

int main()
{
    int arr[3][3] = {
       {3,5,14},
       {2,3,9},
       {6,2,7}
    };

    int a = 0;
    int num = 0;
    int count = 0;

    std::cin >> a;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            num = arr[i][j] % a;
            //나머지가 0이면 배수임
            if (num == 0)
            {
                count++;
            }

        }
    }
    std::cout << count;




    return 0;
}