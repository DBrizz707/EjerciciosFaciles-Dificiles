//Muestra los primeros N términos de la serie de Fibonacci utilizando while.
#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    long long int a = 0, b = 1, c;

    cout << "Introduce el número de términos: ";
    cin >> n;

    while (i < n) {
        if (i == 0) {
            c = a;
        } else if (i == 1) {
            c = b;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
        i++;
    }
    cout << endl;
    return 0;
}