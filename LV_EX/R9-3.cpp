#include <iostream>

int main() {


    char q[5][3] = {
    {'D','A','A'},
    {'B','C','D'},
    {'E','F','A'},
    {'A','A','D'},
    {'F','G','E'}
    };

    char a;
    std::cin >> a;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (q[i][j] == a)
            {
                std::cout << "(" << i << ")" << "(" << j << ")" << std::endl;
            }
        }
    }


    return 0;
}