#include <iostream>
using namespace std;

struct person
{
    int age;
    char name[20];
};

int main(void)
{
    struct person people[] = { 23, "Tom", 32, "Bob", 26, "Alice", 41, "Sam" };

    int n = sizeof(people) / sizeof(people[0]);

    /*
    for (struct person* p = people; p < people + n; p++)
    {
        cout << "name: " << p->name << " age: " << p->age << endl;
    }
    */
    for (int i=0; i < n; i++)
    {
        cout << "name: " << people[i].name << " age: " << people[i].age << endl;
    }
    return 0;
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
