#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int contarPalabras(string cadena) {
    stringstream ss(cadena);
    string palabra;
    int contador = 0;
    while (ss >> palabra) {
        contador++;
    }
    return contador;
}

int main() {
    string texto;
    cout << "Ingrese una frase: ";
    getline(cin, texto);
    cout << "Cantidad de palabras: " << contarPalabras(texto) << endl;
    return 0;
}
