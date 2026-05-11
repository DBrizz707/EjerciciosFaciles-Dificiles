#include <iostream>
using namespace std;

int main() {
    int Numero;
    int sumaPares = 0;
    int contador = 1; 

    cout << "Ingrese un numero cualquiera: ";
    cin >> Numero;

    while (contador <= Numero) {
        if (contador % 2 == 0) { 
            sumaPares += contador; 
        }
        contador++; 
    }

    cout << "La suma de los numeros pares desde 1 hasta " << Numero << " es: " << sumaPares << endl;

    return 0;
    

}