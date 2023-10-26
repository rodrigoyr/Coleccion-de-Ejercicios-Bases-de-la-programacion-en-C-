#include <iostream>

int main() {
    //Utiliza un bucle for para imprimir los números del 1 al 10
    for (int i = 1; i <= 10; i++) {
        //Imprime el índice
        std::cout << i << "\n";
    }

    int x;
    std::cout << "Pon un número: ";
    std::cin >> x;
    int j = 1;
    std::cout << "Su tabla de multiplicar del 1 al 9 es:" << "\n";
    while (j < 10) {
        std::cout << j * x<< "\n";
        j++;
    }

    int y;
    j = 1;
    std::cout << "Pon otro número: ";
    std::cin >> y;
    std::cout << "Su tabla de multiplicar del 1 al 9 es:" << "\n";
    do {
        std::cout << j * y << "\n";
        j++;
    } while (j < 10);

    int opc;
    std::cout << "Elija una opción del 1 al 4: ";
    std::cin >> opc;

    switch (opc) {
        case 1: std::cout << "Elegiste la opción 1";
        break;
        case 2: std::cout << "Elegiste la opción 2";
        break;
        case 3: std::cout << "Elegiste la opción 3";
        break;
        case 4: std::cout << "Elegiste la opción 4";
        break;
        default: std::cout << "Has escogido una opción inválida";
    }

    return 0;
}
