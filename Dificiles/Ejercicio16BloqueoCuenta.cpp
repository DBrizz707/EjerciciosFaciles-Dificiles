//Simula un sistema de autenticación con un usuario y 
//contraseña, permitiendo hasta 3 intentos.

#include <iostream>
using namespace std;
int main() {
    string usuario, contrasena;
    int intentos = 0;
    const int MAX_INTENTOS = 3;

    while (intentos < MAX_INTENTOS) {
        cout << "Introduce el nombre de usuario: ";
        cin >> usuario;
        cout << "Introduce la contraseña: ";
        cin >> contrasena;

        if (usuario == "admin" && contrasena == "1234") {
            cout << "Acceso concedido." << endl;
            return 0; 
        } else {
            cout << "Acceso denegado. Intento " << (intentos + 1) << " de " << MAX_INTENTOS << "." << endl;
            intentos++;
        }
    }

    cout << "Has agotado los intentos. Acceso bloqueado." << endl;
    return 0;
}