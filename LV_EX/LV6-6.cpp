#include <iostream>

int main() {
    char g = 0; 
  
    std::cin >> g; 
    

    if (g >= 65 && g <= 90) { // �빮�� �Ǻ� (A=65, Z=90)
        std::cout << "�빮�� �Դϴ�.\n";
    }
    else if (g >= 97 && g <= 122) { // �ҹ��� �Ǻ� (a=97, z=122)
        std::cout << "�ҹ��� �Դϴ�.\n";
    }
    

    return 0;
}
