//Pide el peso de un paquete y cobra $5 si pesa hasta 5kg,
// $10 si pesa entre 6kg y 10kg, y $15 si pesa más de 10kg.
#include <iostream>
using namespace std;
int main() {
    double peso;
    cout << "Introduce el peso del paquete en kg: ";
    cin >> peso;

    if (peso <= 5) {
        cout << "El costo de envío es $5." << endl;
    } else if (peso > 5 && peso <= 10) {
        cout << "El costo de envío es $10." << endl;
    } else {
        cout << "El costo de envío es $15." << endl;
    }

    return 0;
}