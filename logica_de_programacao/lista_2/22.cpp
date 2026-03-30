#include <iostream>

using namespace std;

int main() {
    float tempo, velocidade;

    cout << "Tempo gasto (horas): ";
    if (!(cin >> tempo)) return 0;

    cout << "Velocidade media (km/h): ";
    if (!(cin >> velocidade)) return 0;

    float distancia = tempo * velocidade;
    float litros = distancia / 12.0f;

    cout << "Velocidade media: " << velocidade << " km/h\n";
    cout << "Tempo gasto: " << tempo << " horas\n";
    cout << "Distancia percorrida: " << distancia << " km\n";
    cout << "Litros usados: " << litros << " L\n";

    return 0;
}
