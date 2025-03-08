#include <iostream>

int main() {


    int count = 0;
    char a;
    char q[5] = { " " };

    for (int i = 0; i < 5; i++)
    {
        std::cin >> q[i];



        if (q[i] == 'A')
        {
            count++;

        }
    }

    std::cout << "문자A는" << count << "개 발견" << std::endl;

    for (int i = 0; i < 5; i++)
    {




        if (q[i] == 'A')
        {
            std::cout << i << "번" << std::endl;

        }
    }







    return 0;
}