#include <iostream>

void imprimirVetor(const int vetor[], int tamanho) {
    // Imprime o vetor na ordem normal
    std::cout << "Vetor na ordem normal: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    // Imprime o vetor na ordem inversa
    std::cout << "Vetor na ordem inversa: ";
    for (int i = tamanho - 1; i >= 0; i--) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}
