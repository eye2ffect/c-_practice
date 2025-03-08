#include<iostream>
struct Person {
	int age;
	int height;
};

//구조체 변수도 전역함수 가능
Person a;
Person b;

void input()
{
  std::cin >> a.age >> a.height >> b.age >> b.height;
}
//두 사람 a와 b의 age 평균은 (50 + 70) / 2 = 60
//두 사람 a와 b의 height 평균은(60 + 80) / 2 = 70
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