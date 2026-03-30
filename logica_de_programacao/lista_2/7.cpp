#include <iostream>
using namespace std;

int main() {
    float preco;
    int codigo, cargo;
    cout << "Digite o preco do produto: ";
    cin >> preco;
    
    cout << "Digite o codigo de origem: ";
    cin >> codigo;
        
    if (codigo == 1) {
        cout << "Procedencia: Sul" << endl;
    } else if (codigo == 2) {
        cout << "Procedencia: Norte" << endl;
    } else if (codigo == 3) {
        cout << "Procedencia: Leste" << endl;
    } else if (codigo == 4) {
        cout << "Procedencia: Oeste" << endl;
    } else if (codigo == 5 || codigo == 6) {
        cout << "Procedencia: Nordeste" << endl;
    } else if (codigo >= 7 && codigo <= 9) {
        cout << "Procedencia: Sudeste" << endl;
    } else if (codigo >= 10 && codigo <= 20) {
        cout << "Procedencia: Centro-Oeste" << endl;
    } else if (codigo >= 21 && codigo <= 30) {
        cout << "Procedencia: Nordeste" << endl;
    } else {
        cout << "Codigo invalido" << endl;
    }

    return 0;
}
