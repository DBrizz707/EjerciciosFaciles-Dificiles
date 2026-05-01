//Un parque cobra diferente según la edad: niños menores de 5 entran gratis, 
//entre 5 y 12 pagan $5, mayores de 12 pagan $10.
#include <iostream>
using namespace std;
int main() {
    int edad;
    cout << "Introduce tu edad: ";
    cin >> edad;

    if (edad < 5) {
        cout << "Entrada gratuita." << endl;
    } else if (edad >= 5 && edad <= 12) {
        cout << "El costo de entrada es $5." << endl;
    } else {
        cout << "El costo de entrada es $10." << endl;
    }

    return 0;
}