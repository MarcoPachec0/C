#include <iostream>

int main() {
    int soma = 0;

    // Loop de 1 a 500, somando cada número à variável 'soma'
    for (int i = 1; i <= 500; i++) {
        soma += i;
    }

    // Imprime a soma dos números de 1 a 500
    std::cout << "A soma dos números de 1 a 500 é: " << soma << std::endl;

    return 0;
}