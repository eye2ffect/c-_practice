#include<iostream>

int main()
{

	char a, b;

    std::cin >> a>>b;

     //���� 10�� ���� 
     //cout << (char)(ch - 'a' + 'A'); //�빮�� D�� ��� �˴ϴ�.
    
    if (a >= 'A' && a <= 'Z') { // ��->��
        a = a + ('a' - 'A');   
    }
    else if (a >= 'a' && a <= 'z') { // ��->��
        a = a - ('a' - 'A');   
    }

    if (b >= 'A' && b <= 'Z') { // ��->��
        b = b + ('a' - 'A');    
    }
    else if (b >= 'a' && b <= 'z') { // ��->��
        b = b - ('a' - 'A');    
    }

    
    std::cout << a << " " << b << std::endl;

    return 0;


	
}