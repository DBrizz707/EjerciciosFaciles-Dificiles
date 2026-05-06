//Mejora la calculadora simple agregando ^ para exponenciación y % para módulo.

#include <iostream>
#include <cmath>

int main() {
    double num1, num2;
    char op;
    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese lo que quieres operar (+, -, *, /, ^, %): ";
    std::cin >> op;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    double resultado;
    switch (op){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        case '^':
            resultado = std::pow(num1, num2);
            break;
        case '%':
            resultado = std::fmod(num1, num2);
            break;
    }
    std::cout << "El resultado es: " << resultado << std::endl;
    return 0;
}