#include <iostream>

int modulo(int x) {
    if (x < 0) {
        return -x; 
    } else {
        return x; 
    }
}

int main(int argc, char** argv) {
    int numero;
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    int resultado = modulo(numero);
    std::cout << "O módulo de " << numero << " é " << resultado << '\n'; 

    return 0;
}