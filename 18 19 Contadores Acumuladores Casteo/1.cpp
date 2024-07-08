#include <iostream>
using namespace std;

int main() {
    int n;
    int dato = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = n-1; j>=0; j--) {
            if (j <= i) {
                cout << dato;
                dato = ++dato % 10;
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }

    return 0;
}
