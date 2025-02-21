#include <iostream>

int main() {
    char g = 0; 
  
    std::cin >> g; 
    

    if (g >= 65 && g <= 90) { // 대문자 판별 (A=65, Z=90)
        std::cout << "대문자 입니다.\n";
    }
    else if (g >= 97 && g <= 122) { // 소문자 판별 (a=97, z=122)
        std::cout << "소문자 입니다.\n";
    }
    

    return 0;
}
