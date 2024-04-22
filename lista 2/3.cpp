int main() {
    int tamanho;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;

    int vetor[tamanho];
    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cin >> vetor[i];
    }

    imprimirVetor(vetor, tamanho);

    return 0;
}