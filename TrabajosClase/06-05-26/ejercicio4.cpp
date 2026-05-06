//Solicita el salario de un trabajador y muestra el porcentaje de impuestos a pagar 
//según su rango de ingresos. ocupa el switch para determinar el porcentaje de impuestos.
#include <iostream>
using namespace std;

int main() {
    double salario;
    int rango;
    double impuesto;

    cout << "Ingrese el salario: ";
    cin >> salario;

    rango = salario / 1000;

    switch (rango) {
        case 0: // 0 - 999
            impuesto = 0.05;
            break;
        case 1: // 1000 - 1999
            impuesto = 0.10;
            break;
        case 2: // 2000 - 2999
            impuesto = 0.15;
            break;
        default: // 3000 en adelante
            impuesto = 0.20;
            break;
    }

    cout << "Impuesto: " << impuesto * 100 << "%" << endl;
    cout << "Monto a pagar: $" << salario * impuesto << endl;

    return 0;
}