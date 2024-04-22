#include <iostream>
#include <cmath>

int modulo(int x) {
    return std::abs(x);
}

int main() {
    int numero;

    // Solicita que o usuário digite um número
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    // Calcula o modulo do número usando a função modulo
    int resultado = modulo(numero);

    // Imprime o resultado
    std::cout << "O modulo de " << numero << " é: " << resultado << std::endl;

    return 0;
}