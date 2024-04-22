#include <iostream>

int main() {
    int numeroHabitantes, habitantesMasculinos = 0, habitantesFemininos = 0;

    // Solicita que o usuário digite o número de habitantes
    std::cout << "Digite o numero de habitantes: ";
    std::cin >> numeroHabitantes;

    // Loop para inserir o sexo de cada habitante
    for (int i = 0; i < numeroHabitantes; i++) {
        char sexo;
        std::cout << "Digite o sexo do habitante " << (i + 1) << " (M/F): ";
        std::cin >> sexo;

        // Verifica o sexo e incrementa a variável correspondente
        if (sexo == 'M'  sexo == 'm') {
            habitantesMasculinos++;
        } else if (sexo == 'F'  sexo == 'f') {
            habitantesFemininos++;
        } else {
            std::cout << "Sexo invalido. Por favor, digite M para masculino ou F para feminino." << std::endl;
            i--; // Volta uma iteração para permitir que o usuário digite novamente
        }
    }

    // Calcula a porcentagem de habitantes de cada sexo
    double porcentagemMasculinos = (static_cast<double>(habitantesMasculinos) / numeroHabitantes) * 100;
    double porcentagemFemininos = (static_cast<double>(habitantesFemininos) / numeroHabitantes) * 100;

    // Imprime os resultados
    std::cout << "Quantidade de habitantes do sexo masculino: " << habitantesMasculinos << std::endl;
    std::cout << "Quantidade de habitantes do sexo feminino: " << habitantesFemininos << std::endl;
    std::cout << "Porcentagem de habitantes do sexo masculino: " << porcentagemMasculinos << "%" << std::endl;
    std::cout << "Porcentagem de habitantes do sexo feminino: " << porcentagemFemininos << "%" << std::endl;

    return 0;
}