//Pide dos contraseñas y verifica si coinciden antes de continuar.

#include <iostream>
using namespace std;

int main() {
    string contrasena1, contrasena2;

    cout << "Introduce la primera contraseña: ";
    cin >> contrasena1;
    cout << "Introduce la segunda contraseña: ";
    cin >> contrasena2;

    if (contrasena1 == contrasena2) {
        cout << "Las contraseñas coinciden." << endl;
    } else {
        cout << "Las contraseñas no coinciden." << endl;
    }

    return 0;
}