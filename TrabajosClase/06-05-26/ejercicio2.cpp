//Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.
#include <iostream>

int main() {
    int puntuaje;
    std::cout << "Ingrese el puntaje del jugador (1-5 estrellas): ";
    std::cin >> puntuaje;
    switch (puntuaje) {
        case 1:
            std::cout << "Mal desempeno." << std::endl;
            break;
        case 2:
            std::cout << "Desempeño regular." << std::endl;
            break;
        case 3:
            std::cout << "Buen desempeno." << std::endl;
            break;
        case 4:
            std::cout << "Muy buen desempeno." << std::endl;
            break;
        case 5:
            std::cout << "Excelente desempeno." << std::endl;
            break;
        default:
            std::cout << "Puntaje invalido." << std::endl;
    }
    return 0;
}