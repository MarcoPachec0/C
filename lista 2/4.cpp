#include <iostream>
#include <cmath>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

// Função para calcular o seno de um ângulo em radianos usando a série de Taylor
double seno(double x, int n) {
    double resultado = 0.0;
    for (int i = 0; i < n; i++) {
        int expoente = 2 * i + 1;
        int sinal = i % 2 == 0 ? 1 : -1;
        resultado += sinal * (pow(x, expoente) / fatorial(expoente));
    }
    return resultado;
}

int main() {
    double angulo;
    int numeroTermos;

    // Solicita que o usuário digite o ângulo em radianos e o número de termos da série
    std::cout << "Digite o angulo em radianos: ";
    std::cin >> angulo;
    std::cout << "Digite o numero de termos da serie: ";
    std::cin >> numeroTermos;

    // Calcula e imprime o resultado do seno
    double resultado = seno(angulo, numeroTermos);
    std::cout << "O seno de " << angulo << " é: " << resultado << std::endl;

    return 0;
}