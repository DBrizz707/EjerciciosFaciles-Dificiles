//Simula la verificación de un usuario y contraseña predefinidos.
#include <iostream>
using namespace std;
int main() {
    string usuario, contrasena;
    cout << "Introduce el nombre de usuario: ";
    cin >> usuario;
    cout << "Introduce la contraseña: ";
    cin >> contrasena;

    if (usuario == "admin" && contrasena == "1234") {
        cout << "Acceso concedido." << endl;
    } else {
        cout << "Acceso denegado." << endl;
    }

    return 0;
}