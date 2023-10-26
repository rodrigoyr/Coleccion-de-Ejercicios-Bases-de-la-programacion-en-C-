#include <iostream>

#define PI 3.14159
void call() {
    std::cout << "Esta es una llamada a un void" << std::endl;
}

enum Meses {enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre};

typedef double Prec;

int main() {
    const double radio = 5.0;
    double area = PI * radio * radio;
    std::cout << "El área del círculo es: " << area << std::endl;

    call();

    Prec prod1 = 19.99;
    Prec prod2 = 29.99;
    std::cout << "El precio total es: " << prod1 + prod2 << std::endl;

    Meses mesActual = octubre;
    std::cout << "Estamos en el mes número: " << mesActual + 1;

    return 0;
}