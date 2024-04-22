#include <iostream>

int main() {
    int n;
    int soma = 0;

    // Solicita que o usuário digite o valor de n
    std::cout << "Digite um valor para n: ";
    std::cin >> n;

    // Loop de 1 até n, somando cada número à variável 'soma'
    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    // Imprime a soma dos números de 1 até n
    std::cout << "A soma dos números de 1 até " << n << " é: " << soma << std::endl;

    return 0;
}