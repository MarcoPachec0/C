#include <iostream>
#include <vector>
#include <math.h>

double calcularMedia(const std::vector<int>& numeros) {
    double soma = 0.0;
    for (int numero : numeros) {
        soma += numero;
    }
    return soma / numeros.size();
}

double calcularVariancia(const std::vector<int>& numeros) {
    double media = calcularMedia(numeros);
    double somaQuadradosDiferencas = 0.0;
    for (int numero : numeros) {
        somaQuadradosDiferencas += pow(numero - media, 2);
    }
    return somaQuadradosDiferencas / numeros.size();
}

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5, 6};
    double variancia = calcularVariancia(numeros);
    std::cout << "A variância do conjunto {1, 2, 3, 4, 5, 6} é aproximadamente: " << variancia << std::endl;
    return 0;
}