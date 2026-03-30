#include <iostream>

using namespace std;

int main() {
    unsigned int numero;
    unsigned int n;

    cout << "Digite um numero inteiro nao-negativo: ";
    if (!(cin >> numero)) {
        cout << "Entrada invalida\n";
        return 1;
    }

    cout << "Digite a posicao do bit a limpar (0 = LSB): ";
    if (!(cin >> n)) {
        cout << "Entrada invalida\n";
        return 1;
    }

    unsigned int maxBits = sizeof(unsigned int) * 8;
    if (n >= maxBits) {
        cout << "Posicao invalida: deve ser entre 0 e " << (maxBits - 1) << "\n";
        return 1;
    }

    unsigned int mask = 1u << n;
    unsigned int bitAtual = (numero & mask) ? 1u : 0u;
    unsigned int resultado = numero & ~mask;

    cout << "\nNumero original: " << numero << "\n";
    cout << "Bit " << n << " atual: " << bitAtual << "\n";
    cout << "Numero apos limpar bit " << n << ": " << resultado << "\n";

    return 0;
}
