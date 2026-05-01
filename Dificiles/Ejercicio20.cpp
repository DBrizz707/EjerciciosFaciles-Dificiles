//Un programa debe calificar el estado de un
// conductor según su edad, número de infracciones y años de experiencia.
#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;

    cout << "Ingrese la edad del conductor: ";
    cin >> edad;
    cout << "Ingrese el número de infracciones: ";
    cin >> infracciones;
    cout << "Ingrese los años de experiencia: ";
    cin >> experiencia;

    if (edad < 18) {
        cout << "Conductor menor de edad." << endl;
    } else if (infracciones == 0) {
        if (experiencia >= 5) {
            cout << "Conductor muy experimentado y sin infracciones." << endl;
        } else {
            cout << "Conductor sin infracciones pero con poca experiencia." << endl;
        }
    } else if (infracciones <= 2) {
        if (experiencia >= 3) {
            cout << "Conductor con pocas infracciones y algo de experiencia." << endl;
        } else {
            cout << "Conductor con pocas infracciones pero poca experiencia." << endl;
        }
    } else {
        cout << "Conductor con muchas infracciones." << endl;
    }

    return 0;
}