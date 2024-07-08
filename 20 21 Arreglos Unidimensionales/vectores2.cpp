#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Ejemplo de assign()
    // Llena el vector con una cantidad específica de elementos, todos con el mismo valor.
    vector<int> vec1;
    vec1.assign(5, 10); // Asigna cinco elementos, todos con valor 10
    // vec1: {10, 10, 10, 10, 10}

    // Ejemplo de at()
    // Accede al elemento en una posición específica, lanzando una excepción si está fuera de los límites.
    vector<int> vec2 = {1, 2, 3};
    int val = vec2.at(1); // Obtiene el elemento en la posición 1, que es 2

    // Ejemplo de back()
    // Devuelve una referencia al último elemento del vector.
    int last = vec2.back(); // Obtiene el último elemento, que es 3

    // Ejemplo de begin()
    // Devuelve un iterador al primer elemento del vector.
    auto it_begin = vec2.begin(); // Iterador al primer elemento, que es 1

    // Ejemplo de capacity()
    // Muestra la cantidad de elementos que el vector puede contener sin realocar memoria.
    vec2.reserve(10); // Reserva espacio para al menos 10 elementos
    size_t cap = vec2.capacity(); // cap es 10

    // Ejemplo de clear()
    // Elimina todos los elementos del vector.
    vec2.clear(); // Elimina todos los elementos de vec2
    // vec2: {}

    // Ejemplo de empty()
    // Comprueba si el vector está vacío.
    bool isEmpty = vec2.empty(); // isEmpty es true

    // Ejemplo de end()
    // Devuelve un iterador al elemento después del último del vector.
    auto it_end = vec2.end(); // Iterador al elemento después del último

    // Ejemplo de erase()
    // Elimina uno o varios elementos del vector.
    vector<int> vec3 = {1, 2, 3};
    vec3.erase(vec3.begin()); // Elimina el primer elemento
    // vec3: {2, 3}

    // Ejemplo de front()
    // Devuelve una referencia al primer elemento del vector.
    int first = vec3.front(); // Obtiene el primer elemento, que es 2

    // Ejemplo de insert()
    // Inserta elementos en una posición específica del vector.
    vec3.insert(vec3.begin() + 1, 4); // Inserta 4 en la posición 1
    // vec3: {2, 4, 3}

    // Ejemplo de max_size()
    // Devuelve el número máximo de elementos que el vector puede contener teóricamente.
    size_t maxSize = vec3.max_size(); // Obtiene el número máximo de elementos que puede contener

    // Ejemplo de pop_back()
    // Elimina el último elemento del vector.
    vec3.pop_back(); // Elimina el último elemento
    // vec3: {2, 4}

    // Ejemplo de push_back()
    // Añade un elemento al final del vector.
    vec3.push_back(5); // Añade 5 al final
    // vec3: {2, 4, 5}

    // Ejemplo de reserve()
    // Reserva espacio en el vector para al menos un número especificado de elementos.
    vec3.reserve(20); // Reserva espacio para al menos 20 elementos

    // Ejemplo de resize()
    // Cambia el tamaño del vector.
    vec3.resize(5, 0); // Cambia el tamaño del vector a 5, rellenando con 0 si es necesario
    // vec3: {2, 4, 5, 0, 0}

    // Ejemplo de size()
    // Devuelve el número de elementos en el vector.
    size_t size = vec3.size(); // size es 5

    // Ejemplo de swap()
    // Intercambia el contenido de dos vectores.
    vector<int> vec4 = {6, 7, 8};
    vec3.swap(vec4); // Intercambia el contenido de vec3 y vec4
    // vec3: {6, 7, 8}
    // vec4: {2, 4, 5, 0, 0}

    // Ejemplo de operador !=
    // Devuelve true si los vectores no son iguales.
    vector<int> vec5 = {1, 2, 3};
    vector<int> vec6 = {1, 2, 4};
    bool result_neq = (vec5 != vec6); // result_neq es true

    // Ejemplo de operador <
    // Devuelve true si el primer vector es lexicográficamente menor que el segundo.
    bool result_lt = (vec5 < vec6); // result_lt es true

    // Ejemplo de operador <=
    // Devuelve true si el primer vector es lexicográficamente menor o igual que el segundo.
    bool result_leq = (vec5 <= vec6); // result_leq es true

    // Ejemplo de operador ==
    // Devuelve true si los vectores son iguales.
    vector<int> vec7 = {1, 2, 3};
    bool result_eq = (vec5 == vec7); // result_eq es true

    // Ejemplo de operador >
    // Devuelve true si el primer vector es lexicográficamente mayor que el segundo.
    bool result_gt = (vec6 > vec5); // result_gt es true

    // Ejemplo de operador >=
    // Devuelve true si el primer vector es lexicográficamente mayor o igual que el segundo.
    bool result_geq = (vec6 >= vec5); // result_geq es true

    return 0;
}
