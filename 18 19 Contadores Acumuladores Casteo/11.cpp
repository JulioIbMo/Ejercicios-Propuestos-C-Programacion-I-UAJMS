#include <iostream>
#include <string>
#include <cmath> // Para la función pow

using namespace std;

int main() {
    string binario;
    cin >> binario;
    int decimal = 0;
    for (size_t i = 0; i < binario.length(); ++i) {
        if (binario[i] == '1') {
            decimal += pow(2, binario.length() - 1 - i);
        }
    }
    cout << decimal << endl;
    return 0;
}
