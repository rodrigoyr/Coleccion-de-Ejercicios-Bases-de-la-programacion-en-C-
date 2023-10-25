#include <iostream>

int main() {
    int numero = 42;
    int &referenciaNumero = numero;

    std::cout << "Valor de numero: " << numero << std::endl;
    std::cout << "Valor de referenciaNumero: " << referenciaNumero << std::endl;

    referenciaNumero = 100;

    std::cout << "Nuevo valor de numero: " << numero << std::endl;
    std::cout << "Nuevo valor de referenciaNumero: " << referenciaNumero << std::endl;

    return 0;
}
