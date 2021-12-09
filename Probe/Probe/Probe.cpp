#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    int c = 2 * a + b;
    return c;
}

int main()
{
    int a = 5;
    int b = 6;
    int c, d;
    c = a + b;
    d = Sum(a, b);

    cout << c << endl;
}

