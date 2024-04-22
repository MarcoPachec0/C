#include <iostream>
#include <vector>

std::vector<int> matrizParaVetor(const std::vector<std::vector<int>>& matriz) {
    std::vector<int> vetor;
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            vetor.push_back(elemento);
        }
    }
    return vetor;
}

std::vector<std::vector<int>> lerMatrizDoUsuario(int linhas, int colunas) {
    std::vector<std::vector<int>> matriz(linhas, std::vector<int>(colunas, 0));

    std::cout << "Digite os elementos da matriz:" << std::endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    return matriz;
}

int main() {
    int linhas, colunas;

    // Solicita que o usuário informe as dimensões da matriz
    std::cout << "Digite o numero de linhas e colunas da matriz: ";
    std::cin >> linhas >> colunas;

    // Lê a matriz do usuário
    std::vector<std::vector<int>> matriz = lerMatrizDoUsuario(linhas, colunas);

    // Converte a matriz em um vetor
    std::vector<int> vetorResultado = matrizParaVetor(matriz);

    // Imprime o vetor resultante
    std::cout << "Vetor resultado: ";
    for (int elemento : vetorResultado) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}