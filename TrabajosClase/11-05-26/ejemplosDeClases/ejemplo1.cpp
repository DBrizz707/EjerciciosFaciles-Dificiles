#include <iostream>
using namespace std;

int main() {
    int contador = 0;
     
    cout << "ingrese un numero para iniciar el contador: " ;
    cin >> contador;

    while (contador <=5)
    {
        cout << "contador en while: " << contador << endl;
        contador++;
    }
    
    return 0;
}