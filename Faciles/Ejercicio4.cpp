//Solicita una calificación numérica y muestra 
//si el estudiante aprobó o reprobó (mínimo aprobatorio: 60)
#include <iostream>
using namespace std;

int main() {
    int calificacion;
    cout << "Introduce la calificacion: ";
    cin >> calificacion;

    if (calificacion >= 60) {
        cout << "El estudiante aprobo." << endl;
    } else {
        cout << "El estudiante reprobo." << endl;
    }

    return 0;
}