//Calcula la tarifa según el consumo:
// menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

#include <iostream>
using namespace std;

int main() {
    int consumo;
    cout << "Introduce el consumo en kWh: ";
    cin >> consumo;

    if (consumo < 100) {
        cout << "Tarifa baja." << endl;
    } else if (consumo >= 100 && consumo <= 200) {
        cout << "Tarifa media." << endl;
    } else {
        cout << "Tarifa alta." << endl;
    }

    return 0;
}
