#include<iostream>

int main()
{
    int arr[4] = { 0,0,0,0 };
   int a = 0; int b = 0;
   std::cin >> a >> b;

   arr[0] = a; //���� �־��ش�
   arr[2] = b;

   std::cout << arr[0] << arr[1] << arr[2] << arr[3];

    return 0;
}
