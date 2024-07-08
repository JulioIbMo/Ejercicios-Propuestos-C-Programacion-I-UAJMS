#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string frase;
    getline(cin, frase);

    stringstream ss(frase);
    string palabra;

    while (ss >> palabra) {
        cout << palabra << endl; 
        }

    return 0;
}
