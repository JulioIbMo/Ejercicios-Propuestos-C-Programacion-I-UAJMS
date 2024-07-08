#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool esNumeroValido = true;

    for (char c : n) {
        if (!isdigit(c)) {
            esNumeroValido = false;
            break;
        }
    }

    if (esNumeroValido) {
        int numero = stoi(n);
        int doble = numero * 2;
        cout << n << ", es un numero valido, su doble es: " << doble << endl;
    } else {
        cout << n << ", no es un numero valido." << endl;
    }

    return 0;
}
