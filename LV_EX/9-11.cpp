#include<iostream>
struct Person {
	int age;
	int height;
};

//����ü ������ �����Լ� ����
Person a;
Person b;

void input()
{
  std::cin >> a.age >> a.height >> b.age >> b.height;
}
//�� ��� a�� b�� age ����� (50 + 70) / 2 = 60
//�� ��� a�� b�� height �����(60 + 80) / 2 = 70
void output()

{
	std::cout << (a.age + b.age) / 2 << " " << (a.height + b.height) / 2;
}

int main()
{
	input();
	output();

	return 0;
}