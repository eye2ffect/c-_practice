#include <iostream>
using namespace std;
int main()
{
    //7���� ���ݾ���� 
    int a = 0; int b = 0;  int c = 0; int d = 0;
    
    cin >> a >> b >> c >> d;

    int e = a + b + c + d ; //�ٵ� �� �ٴ��ؼ� �ٷ� ������ 4�� �ϴ°Ŵ� ���ٷ� �ȵ���..?
    int f = e / 4;
    //�ι��� ��հ�������  �޶����°� ���� �����Ȱ� �Է°� ��հ��̴�. 
    
    //a�϶�
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
    
    //b�϶� 

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

    //c�϶� 
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

    //d�϶� 

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