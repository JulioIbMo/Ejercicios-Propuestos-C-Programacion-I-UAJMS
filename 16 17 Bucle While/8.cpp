#include <iostream>
using namespace std;
int main()
{
    int nTabla = 1;
    int a = 1, b = 1;
    while (nTabla <= 10)
    {
        while (a <= 10)
        {
            cout << b << "x" << a << "=" << a * b << endl;
            a++;
        }

        nTabla++;
        a = 1;
        b++;
        cout << endl;
    }
    return 0;
}