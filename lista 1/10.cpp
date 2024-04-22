#include <iostream>

int main() {
    int n;
    int termo1 = 1, termo2 = 1, termoAtual;

    // Solicita que o usuário digite o número de termos da série
    std::cout << "Digite o numero de termos da serie de Fibonacci: ";
    std::cin >> n;

    // Mostra os termos da série de Fibonacci de 1 até n
    std::cout << "Termos da serie de Fibonacci de 1 ate " << n << ":" << std::endl;
    std::cout << termo1 << " ";
    for (int i = 2; i <= n; i++) {
        std::cout << termo2 << " ";
        termoAtual = termo1 + termo2;
        termo1 = termo2;
        termo2 = termoAtual;
    }
    std::cout << std::endl;

    return 0;
}