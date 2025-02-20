#include <iostream>
using namespace std;

 int main()

 {
    int b1 = 0; int b2 = 0; int b3 = 0;
    int b4 = 0;
    
    // 조건이 b1이 제일 클때가 있고
    // 조건이 b2가 제일 클때가 있고
    // 조건이 b3가 제일 클때가 있고
    // 조건이 b4가 제일 클때가 있고
    

    cin >> b1 >> b2 >> b3 >>b4;

   
    
    if ( b1>=b2  )
    {
        if (b1 >= b3)
        {
            if (b1 >= b4)
            
            {
                cout << "b1이 가장크다";
            }
        }
    }

    if (b2 >= b1)
    {
        if (b2 >= b3)
        {
            if (b2 >= b4)

            {
                cout << "b2이 가장크다";
            }
        }
    }

    if (b3 >= b1)
    {
        if (b3 >= b2)
        {
            if (b3 >= b4)

            {
                cout << "b3이 가장크다";
            }
        }
    }

    if (b4 >= b1)
    {
        if (b4 >= b2)
        {
            if (b4 >= b3)

            {
                cout << "b4이 가장크다";
            }
        }
    }

   
    return 0;
}