//Pide dos números e indica cuál es mayor, 
//cuál es menor o si son iguales.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El primer numero es mayor." << endl;
    } else if (num2 > num1) {
        cout << "El segundo numero es mayor." << endl;
    } else {
        cout << "Los dos numeros son iguales." << endl;
    }

    return 0;
}