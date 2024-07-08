#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Número de elementos con los que queremos inicializar el vector
    int n = 10;

    // Inicializamos el vector con n elementos, todos con valor 0
    vector<int> vec1(n, 0);

    // Mostramos el tamaño del vector
    cout << "El tamaño de vec1 es: " << vec1.size() << endl; // Imprime: El tamaño de vec1 es: 10

    // Mostramos los elementos del vector
    cout << "Los elementos de vec1 son: ";
    for (int i = 0; i < vec1.size(); ++i) {
        cout << vec1[i] << " "; // Imprime: 0 0 0 0 0 0 0 0 0 0
    }
    cout << endl;

    return 0;
}
