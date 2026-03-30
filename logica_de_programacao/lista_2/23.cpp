#include <iostream>

using namespace std;

int main() {
    int A, B;

         cout << "Digite o valor de A: ";
    if (!(cin >> A)) return 0;

         cout << "Digite o valor de B: ";
    if (!(cin >> B)) return 0;

    int maior;
    int menor;

    if (A >= B) {
        maior = A;
        menor = B;
    } else {
        maior = B;
        menor = A;
    }

    int diferenca = maior - menor;

    cout << "Maior valor: " << maior << "\n";
    cout << "Menor valor: " << menor << "\n";
    cout << "Diferenca (maior - menor): " << diferenca << "\n";

    return 0;
}
