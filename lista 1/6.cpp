#include <iostream>

int main() {
    double x;
    int n;
    double resultado = 1; // Inicializa o resultado como 1

    // Solicita que o usuário digite o valor de x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    // Solicita que o usuário digite o valor de n
    std::cout << "Digite o valor de n: ";
    std::cin >> n;

    // Calcula x elevado a n
    for (int i = 0; i < n; i++) {
        resultado *= x; // Multiplica o resultado por x a cada iteração
    }

    // Imprime o resultado de x elevado a n
    std::cout << x << " elevado a " << n << " é: " << resultado << std::endl;

    return 0;
}