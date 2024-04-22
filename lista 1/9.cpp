#include <iostream>

int main() {
    int numeroComodos, totalLampadas = 0;
    int classe1 = 0, classe2 = 0, classe3 = 0;

    // Solicita que o usuário digite o número de cômodos da casa
    std::cout << "Digite o numero de comodos da casa: ";
    std::cin >> numeroComodos;

    // Loop para inserir a classe e a área de cada cômodo
    for (int i = 0; i < numeroComodos; i++) {
        int classe;
        double area;

        std::cout << "Digite a classe do comodo " << (i + 1) << ": ";
        std::cin >> classe;

        std::cout << "Digite a area do comodo " << (i + 1) << " em metros quadrados: ";
        std::cin >> area;

        // Calcula o número de lâmpadas necessárias para o cômodo atual
        int potenciaMinima;
        if (classe == 1) {
            potenciaMinima = 15;
            classe1++;
        } else if (classe == 2) {
            potenciaMinima = 18;
            classe2++;
        } else if (classe == 3) {
            potenciaMinima = 20;
            classe3++;
        } else {
            std::cout << "Classe invalida. Por favor, digite 1, 2 ou 3." << std::endl;
            i--; // Volta uma iteração para permitir que o usuário digite novamente
            continue;
        }

        int lampadas = static_cast<int>(area * potenciaMinima / 60);
        totalLampadas += lampadas;
    }

    // Imprime o número total de lâmpadas necessárias e o número de cômodos de cada classe
    std::cout << "Numero total de lampadas necessarias: " << totalLampadas << std::endl;
    std::cout << "Numero de comodos classe 1: " << classe1 << std::endl;
    std::cout << "Numero de comodos classe 2: " << classe2 << std::endl;
    std::cout << "Numero de comodos classe 3: " << classe3 << std::endl;

    return 0;
}