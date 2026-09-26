#include <iostream>
#include <string>
using namespace std;

bool buscarPalabra(string cadena, string palabra) {
    // string::npos indica que no se encontró nada
    return cadena.find(palabra) != string::npos;
}

void imprimirResultado(bool encontrado, string palabra) {
    if (encontrado) cout << "La palabra '" << palabra << "' si se encuentra." << endl;
    else cout << "La palabra '" << palabra << "' no se encuentra." << endl;
}

int main() {
    string cad, pal;
    cout << "Cadena: "; getline(cin, cad);
    cout << "Palabra: "; cin >> pal;

    imprimirResultado(buscarPalabra(cad, pal), pal);
    return 0;
}
