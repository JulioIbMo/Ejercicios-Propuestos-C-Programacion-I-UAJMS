#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 1;
    while (j <= n)
    {
        cout << "|";

        int i = 1;
        while (i <= j)
        {
            cout << " ";
            i++;
        }
        j++;
    }

    return 0;
}
