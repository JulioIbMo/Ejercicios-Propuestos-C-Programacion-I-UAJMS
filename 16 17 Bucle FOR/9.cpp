#include <iostream>
using namespace std;

int main()
{

    int x, y, j = 0;
    cin >> x >> y;
    for (j = x; j <= y; j++)
    {
        int i = 2;
        bool esPrimo = true;
        while (i < j)
        {
            if (j % i == 0)
            {
                esPrimo = false;
            }
            i++;
        }
        if (esPrimo)
        {
            cout << i << " ";
        }
    }

    return 0;
}
