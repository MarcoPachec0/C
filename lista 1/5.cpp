#include <iostream>

int main() {
    int numeroTermos;
    int resultado = 0;
    bool adicionar = true; // Variável para alternar entre adição e subtração

    // Solicita que o usuário digite o número de termos da série
    std::cout << "Digite o número de termos da série: ";
    std::cin >> numeroTermos;

    // Loop para calcular a série alternando entre adição e subtração
    for (int i = 1; i <= numeroTermos; i++) {
        if (adicionar) {
            resultado += i; // Adiciona o número atual se adicionar for verdadeiro
        } else {
            resultado -= i; // Subtrai o número atual se adicionar for falso
        }
        adicionar = !adicionar; // Inverte o valor de adicionar para alternar entre adição e subtração
    }

    // Imprime o resultado da série
    std::cout << "O resultado da série é: " << resultado << std::endl;

    return 0;
}