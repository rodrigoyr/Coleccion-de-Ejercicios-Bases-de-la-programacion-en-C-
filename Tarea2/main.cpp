#include <iostream>

int main() {
    int edad;

    // Solicita al usuario su edad
    std::cout << "Cuantos años tienes? ";
    std::cin >> edad;

    // Verifica si el usuario es mayor de 18
    if (edad >= 18) {
        // Imprime un mensaje diciendo que el usuario es mayor de edad
        std::cout << "Eres mayor de edad.\n";
    } else {
        // Imprime un mensaje diciendo que el usuario es menor de edad
        std::cout << "Eres menor de edad.\n";
    }

    int precEntrada = 20;
    if (edad <=3){
        precEntrada *= 0;
        std::cout << "Como tienes " << edad << " años tu entrada cuesta " << precEntrada;
    }
    if ((edad <= 18 && edad > 3) || edad > 60){
        precEntrada *= 0.7;
        std::cout << "Como tienes " << edad << " años tu entrada cuesta " << precEntrada;
    }
    if (edad > 18 && edad <= 60){
        std::cout << "Como tienes " << edad << " años tu entrada cuesta " << precEntrada;
    }
    return 0;
}
