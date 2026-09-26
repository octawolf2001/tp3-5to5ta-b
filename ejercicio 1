#include <iostream>
using namespace std;

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: División por cero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double n1, n2;
    char op;
    cout << "Ingrese numero 1, operacion (+,-,*,/) y numero 2: ";
    cin >> n1 >> op >> n2;

    if (op == '+') cout << "Resultado: " << sumar(n1, n2);
    else if (op == '-') cout << "Resultado: " << restar(n1, n2);
    else if (op == '*') cout << "Resultado: " << multiplicar(n1, n2);
    else if (op == '/') cout << "Resultado: " << dividir(n1, n2);
    
    return 0;
}
