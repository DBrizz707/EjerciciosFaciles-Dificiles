#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingrese numeros (ingrese 0 para finalizar): " << endl;

    do {
        cin >> numero;
        suma += numero; 
    } while (numero != 0); 


    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}