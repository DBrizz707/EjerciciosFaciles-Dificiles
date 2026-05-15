//Crea un menú que se repita hasta que el usuario elija la opción de salir.
#include <iostream>
using namespace std;

int main() {
    int opcion;
    bool salir = false;

    while (!salir) {
        cout << "Menú:" << endl;
        cout << "1. Opción 1" << endl;
        cout << "2. Opción 2" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Elegiste la opción 1." << endl;
                break;
            case 2:
                cout << "Elegiste la opción 2." << endl;
                break;
            case 3:
                cout << "Saliendo del programa." << endl;
                salir = true;
                break;
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }
    }

    return 0;
}