#include <iostream>
#include <cmath>

double fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    double x, resultado = 0.0;
    int termos;

    // Solicita que o usuário digite o ângulo em radianos
    std::cout << "Digite o angulo em radianos: ";
    std::cin >> x;

    // Solicita que o usuário digite o número de termos da série
    std::cout << "Digite o numero de termos da serie: ";
    std::cin >> termos;

    for (int i = 0; i < termos; i++) {
        int n = 2 * i + 1;
        double termo = pow(-1, i) * pow(x, n) / fatorial(n);
        resultado += termo;
    }

    std::cout << "O valor aproximado de sen(" << x << ") eh: " << resultado << std::endl;

    return 0;
}