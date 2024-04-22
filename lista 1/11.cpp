#include <iostream>

int main() {
    double x, y, z;
    int horas = 0, minutos = 0, segundos = 0;

    // Solicita que o usuário informe os parâmetros
    std::cout << "Informe o intervalo de tempo em segundos (x): ";
    std::cin >> x;
    std::cout << "Informe a massa inicial (y): ";
    std::cin >> y;
    std::cout << "Informe o limiar de massa (z): ";
    std::cin >> z;

    // Calcula o tempo necessário para que a massa seja menor ou igual ao limiar
    while (y > z) {
        y /= 2; // Perda de metade da massa a cada intervalo de tempo
        segundos += x;

        // Ajusta os segundos para minutos e minutos para horas
        if (segundos >= 60) {
            minutos += segundos / 60;
            segundos %= 60;
        }
        if (minutos >= 60) {
            horas += minutos / 60;
            minutos %= 60;
        }
    }

    // Imprime o tempo necessário
    std::cout << "Tempo necessário para que a massa seja menor ou igual a " << z << ":" << std::endl;
    std::cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << segundos << std::endl;

    return 0;
}