#include<iostream>

int main()
{
   char q[7] = { "AFGABC"};

   char a = '0';
   char b = '1';

   int c = 0;
   int d = 0;

   std::cin >> a >> b;
   //a가 배열을 순회하면서 있는지 체크
   //b도 배열을 순회하면서 있는지 체크 순회하면서 두개다 있다면
   //
   for (int i = 0; i < 6; i++)
   {
	   if (q[i] == a)
	   {
		   c++;
	   }

	   if (q[i] == b)
	   {
		   d++;
	   }

   }

   if (c >=1 && d >=1 )
   {
	   std::cout << "와2개";
   }

   else if (d > 0 || c>0)
   {
	   std::cout << "오1개";
   }

   
   else 
   {
	   std::cout << "우0개";
   }

	return 0;
}