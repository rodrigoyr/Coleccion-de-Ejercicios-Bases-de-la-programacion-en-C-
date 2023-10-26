#include <iostream>

void men() {
    std::cout << "Mensaje desde una función" << std::endl;
}
int main() {
    int num = 5;
    int* ptr = &num;

    std::cout << "Valor de la variable: " << num << std::endl;
    std::cout << "Valor a través del puntero: " << *ptr << std::endl;

    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int* ptr_arr = arr;

    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nArray modificado: ";
    for (int i = 0; i < size; ++i) {
        (*ptr_arr) += 1;
        std::cout << arr[i] << " ";
        ++ptr_arr;
    }

    int* dynamicVar = new int;
    *dynamicVar = 10;

    std::cout << "\n" <<"Valor a través de memoria dinámica: " << *dynamicVar << std::endl;

    delete dynamicVar;

    int arr2[] = {1, 2, 3, 4, 5};
    int* ptr_arr2 = arr2;

    std::cout << "Valores del array usando aritmética de punteros: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr_arr2 + i) << " ";
    }

    int num2 = 42;
    int* ptr1 = &num2;
    int** ptr2 = &ptr1;

    std::cout << "\n" <<"Valor de la variable: " << num2 << std::endl;
    std::cout << "Valor a través de puntero 1: " << *ptr1 << std::endl;
    std::cout << "Valor a través de puntero 2: " << **ptr2 << std::endl;

    void (*funcPtr)() = men;

    (*funcPtr)();

    return 0;
}

