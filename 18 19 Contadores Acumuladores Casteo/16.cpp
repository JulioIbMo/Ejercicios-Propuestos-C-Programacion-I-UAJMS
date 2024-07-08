#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << n << " es el factorial de 1" << endl;
        return 0;
    }

    int factorial = 1;
    int i = 1;

    while (factorial < n) {
        i++;
        factorial *= i;
    }

    if (factorial == n) {
        cout << n << " es el factorial de " << i << endl;
    } else {
        cout << n << " no es factorial de ningun numero." << endl;
    }

    return 0;
}
