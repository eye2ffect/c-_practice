#include<iostream>

int main()
{

	char a, b;

    std::cin >> a>>b;

     //문제 10번 참고 
     //cout << (char)(ch - 'a' + 'A'); //대문자 D가 출력 됩니다.
    
    if (a >= 'A' && a <= 'Z') { // 대->소
        a = a + ('a' - 'A');   
    }
    else if (a >= 'a' && a <= 'z') { // 소->대
        a = a - ('a' - 'A');   
    }

    if (b >= 'A' && b <= 'Z') { // 대->소
        b = b + ('a' - 'A');    
    }
    else if (b >= 'a' && b <= 'z') { // 소->대
        b = b - ('a' - 'A');    
    }

    
    std::cout << a << " " << b << std::endl;

    return 0;


	
}