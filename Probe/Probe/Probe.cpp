// дэбаггинг
#include <iostream>
using namespace std;

int Sum(int u, int y)
{
    int c = 2 * u + y;
    return c;
}

int main()
{
    int a = 5;
    int b = 6;
    int c, d;
    c = a + b;
    d = Sum(a, b);
    char s[10] = "Hello";
    int arr[5];
    for (size_t i = 0; i < 5; i++)
    {
        arr[i] = i * i;
    }
    cout << s << endl;
}


/*
// запись в файл
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s = "Twas brillig";
    ofstream f;
    f.open("E:/file_out.txt");
    if (f)
    {
        f << s << endl;
        f << s << endl;
        f << s << endl;
    }
    f.close();
}
*/


/*
// чтение из файла
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x;
    ifstream f;
    f.open("E:/file.txt");
    if (f)
    {
        while (!f.eof())
        {
            f >> x;
            cout << x << endl;
        }
    }
    f.close();

}
*/


/*
// дэбаггинг
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
    char s[10] = "Hello";
    int arr[5];
    for (size_t i = 0; i < 5; i++)
    {
        arr[i] = i * i;
    }
    cout << s << endl;
}
*/
