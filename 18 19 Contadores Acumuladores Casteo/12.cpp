#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<pair<string, double>> estudiantes;
    string nombre;
    double nota;
    string input;

    while (true) {
        getline(cin, nombre);
        if (nombre == "fin") {
            break;
        }

        getline(cin, input);
        nota = stod(input);

        estudiantes.push_back({nombre, nota});
    }

    for (size_t i = 0; i < estudiantes.size() - 1; ++i) {
        for (size_t j = i + 1; j < estudiantes.size(); ++j) {
            if (estudiantes[i].second < estudiantes[j].second) {
                swap(estudiantes[i], estudiantes[j]);
            }
        }
    }

    for (size_t i = 0; i < 3 && i < estudiantes.size(); ++i) {
        cout << (i + 1) << ": " << estudiantes[i].first << " " << estudiantes[i].second << endl;
    }

    return 0;
}
