#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool esAnagrama(string s1, string s2) {
    // Si tienen distinto largo, no pueden ser anagramas
    if (s1.length() != s2.length()) return false;
    
    // Ordenamos los caracteres de cada string
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    return s1 == s2;
}

int main() {
    string p1, p2;
    cout << "Palabra 1: "; cin >> p1;
    cout << "Palabra 2: "; cin >> p2;

    if (esAnagrama(p1, p2)) cout << "Son anagramas." << endl;
    else cout << "No son anagramas." << endl;
    
    return 0;
}
