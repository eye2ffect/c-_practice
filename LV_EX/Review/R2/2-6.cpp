#include <iostream>
using namespace std;

 int main()

 {
    int b1 = 0; int b2 = 0; int b3 = 0;
    int b4 = 0;
    
    // ������ b1�� ���� Ŭ���� �ְ�
    // ������ b2�� ���� Ŭ���� �ְ�
    // ������ b3�� ���� Ŭ���� �ְ�
    // ������ b4�� ���� Ŭ���� �ְ�
    

    cin >> b1 >> b2 >> b3 >>b4;

   
    
    if ( b1>=b2  )
    {
        if (b1 >= b3)
        {
            if (b1 >= b4)
            
            {
                cout << "b1�� ����ũ��";
            }
        }
    }

    if (b2 >= b1)
    {
        if (b2 >= b3)
        {
            if (b2 >= b4)

            {
                cout << "b2�� ����ũ��";
            }
        }
    }

    if (b3 >= b1)
    {
        if (b3 >= b2)
        {
            if (b3 >= b4)

            {
                cout << "b3�� ����ũ��";
            }
        }
    }

    if (b4 >= b1)
    {
        if (b4 >= b2)
        {
            if (b4 >= b3)

            {
                cout << "b4�� ����ũ��";
            }
        }
    }

   
    return 0;
}