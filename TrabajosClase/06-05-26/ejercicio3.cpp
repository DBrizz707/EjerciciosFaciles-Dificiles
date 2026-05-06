//Solicita un mes de nacimiento y muestra el signo zodiacal 
//correspondiente 
#include <iostream>

int main() {
 int mes;


 std::cout << "Ingrese su mes de nacimiento (1-12): ";
 std::cin >> mes;
   switch (mes) {
        case 1:
            std::cout << "Tu signo zodiacal es: Capricornio y Acuario dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
            break;
        case 2:
            std::cout << "Tu signo zodiacal es: Acuario y Piscis dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 3:
            std::cout << "Tu signo zodiacal es: Piscis y Aries dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 4:
            std::cout << "Tu signo zodiacal es: Aries y Tauro dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu da de nacimiento." << std::endl;
            break;
        case 5:
            std::cout << "Tu signo zodiacal es: Tauro y Geminis dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 6:
            std::cout << "Tu signo zodiacal es: Geminis y Cancer dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 7:
            std::cout << "Tu signo zodiacal es: Cancer y Leo dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
            case 8:
            std::cout << "Tu signo zodiacal es: Leo y Virgo dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 9:
            std::cout << "Tu signo zodiacal es: Virgo y Libra dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 10:
            std::cout << "Tu signo zodiacal es: Libra y Escorpio dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 11:
            std::cout << "Tu signo zodiacal es: Escorpio y Sagitario dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        case 12:
            std::cout << "Tu signo zodiacal es: Sagitario y Capricornio dependiendo de tu dia de nacimiento" << std::endl;
            std::cout << "Elige entre ambos signos segun tu dia de nacimiento." << std::endl;
            break;
        default:
            std::cout << "Mes invalido." << std::endl;
    }
    return 0;
}
