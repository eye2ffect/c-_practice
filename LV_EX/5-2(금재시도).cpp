#include<iostream>

int main()
{

    int arr[4] = { 1,2,3,4 };
   
   int k =0; // 합 변수 

   for (int i = 0; i < 4; i++)
   
   {
       std::cin >> arr[i];
 
   }//입력을 for문으로 변경

   
   for (int i = 0; i < arr[i]; i++)
   {
       //arr[i] = x + i
       //왼쪽 변수에 오른쪽 값을 더하고, 그 결과를 왼쪽 변수에 할당
       k += arr[i];//k에 각각 배열로 더하는 값은나옴
       //결과만 4가지 계산된 값만 나오면 되는데.. 전체각각 더하기로 나온다
       //배열 범위까지 반복 
       
   } 
      std::cout << k;

   //첫쨰로 4,5,6,7이면 입력이 저래 나옴 그러면 저걸 다합할려면 
   //어째야 할까

  
   //std::cout << arr[0] + arr[1] + arr[2] + arr[3];
   //i가 입력받는 cin의 반복문 i에서?


}