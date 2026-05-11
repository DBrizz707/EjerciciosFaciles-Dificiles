#include <iostream>
using namespace std;

int main() {
    int contador = 1;
     
    cout << "ingrese un numero para iniciar el contador: " ;
    cin >> contador;

    do
    {
        cout << "contador en do while: " << contador << endl;
        contador++;
    } while (contador <=5);
    
    return 0;
}