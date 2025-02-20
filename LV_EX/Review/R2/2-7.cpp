#include <iostream>
using namespace std;
int main()
{
    //7번이 조금어려움 
    int a = 0; int b = 0;  int c = 0; int d = 0;
    
    cin >> a >> b >> c >> d;

    int e = a + b + c + d ; //근데 왜 다더해서 바로 나누가 4로 하는거는 한줄로 안되지..?
    int f = e / 4;
    //두번쨰 평균값에서는  달라지는게 없고 고정된건 입력과 평균값이다. 
    
    //a일때
    if (a > f )
    {
        cout << a << ">" <<f <<endl;
    }
    
    if (a == f)
    {
        cout <<a << "=="<<f <<endl;
    }

    if (a < f)
    {
        cout << a << "<" << f << endl;
    }
    
    //b일때 

    if (b > f)
    {
        cout << b << ">" << f << endl;
    }

    if (b == f)
    {
        cout << b << "==" << f << endl;
    }

    if (b < f)
    {
        cout << b << "<" << f << endl;
    }

    //c일때 
    if (c > f)
    {
        cout << c << ">" << f << endl;
    }

    if (c == f)
    {
        cout << c << "==" << f << endl;
    }

    if (c < f)
    {
        cout << b << "<" << f << endl;
    }

    //d일때 

    if (d > f)
    {
        cout << d << ">" << f << endl;
    }

    if (d == f)
    {
        cout << d << "==" << f << endl;
    }

    if (d < f)

    {
        cout << d << "<" << f << endl;
    }



    return 0;
}