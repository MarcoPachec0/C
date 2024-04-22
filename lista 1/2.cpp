#include <iostream>

int main() {
    int numero;

    // Solicita que o usuário digite um número
    std::cout << "Digite um número: ";
    std::cin >> numero;

    // Verifica se o número é negativo ou positivo (considerando zero como positivo)
    if (numero < 0) {
        std::cout << "negativo\n";
    } else {
        std::cout << "positivo\n";
    }

    return 0;
}