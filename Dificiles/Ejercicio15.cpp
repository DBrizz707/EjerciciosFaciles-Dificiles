//Pide la velocidad de un conductor. Si supera los 60 km/h, 
//se le aplica una multa; si supera los 80 km/h, la multa es mayor.
#include <iostream>
using namespace std;
int main() {
    double velocidad;
    cout << "Introduce la velocidad del conductor en km/h: ";
    cin >> velocidad;

    if (velocidad > 80) {
        cout << "Multa mayor aplicada." << endl;
    } else if (velocidad > 60) {
        cout << "Multa aplicada." << endl;
    } else {
        cout << "No se aplica multa." << endl;
    }

    return 0;
}