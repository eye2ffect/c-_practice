#include<iostream>

int main()
{
   char q[7] = { "AFGABC"};

   char a = '0';
   char b = '1';

   int c = 0;
   int d = 0;

   std::cin >> a >> b;
   //a�� �迭�� ��ȸ�ϸ鼭 �ִ��� üũ
   //b�� �迭�� ��ȸ�ϸ鼭 �ִ��� üũ ��ȸ�ϸ鼭 �ΰ��� �ִٸ�
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
	   std::cout << "��2��";
   }

   else if (d > 0 || c>0)
   {
	   std::cout << "��1��";
   }

   
   else 
   {
	   std::cout << "��0��";
   }

	return 0;
}