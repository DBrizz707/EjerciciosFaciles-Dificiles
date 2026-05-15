//Solicita un número y muestra una cuenta regresiva hasta 0 ocupa while 
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un número: ";
    cin >> numero;
    while (numero >= 0) {
        cout << numero << " ";
        numero--;
    }
    cout << endl;
    return 0;
}