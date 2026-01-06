#include <iostream>
#include <string>

using namespace std;

class calculator
{
    float result;

public:
    calculator()
    {
        result = 0;
    }

    void sum(float a, float b=0, float c = 0, float d = 0)
    {
        cout << a << "+" << b << "+" << c << "+" << d << endl;
        result = a + b + c + d;
    }

    void sum(int a, int b=0, int c=0, int d=0)
    {
        cout << a << "+" << b << "+" << c<< "+"<<d<<endl;
        result = a + b + c + d;
    }

    void max(float a, float b, float c = 0, float d = 0)
    {
        cout << "max of " << a << "," << b << "," << c << "," << d << " : ";
        if (a > b && a > c && a > d)
            result = a;
        else if (b > a && b > c && b > d)
            result = b;
        else if (c > a && c > b && c > d)
            result = c;
        else
            result = d;
    }

    void print()
    {
        cout << "the result is " << result << endl;
    }
};

using namespace std;
int main()
{

    calculator c;

    c.sum(3,4,3);
    c.print();
    c.sum(1);
    c.print();
    c.sum(1.0F, 2.0F, 3.0F);
    c.print();

    cout<<"-------------------" << endl;

    c.max(11, 12, 13, 14);
    c.print();
    c.max(11, 12, 13);
    c.print();
    c.max(11, 12);
    c.print();
    return 0;
}