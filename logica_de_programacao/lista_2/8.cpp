#include <iostream>
using namespace std;

int main() {
    float altura, peso;
    char sexo;

    cout << "Digite a altura: ";
    cin >> altura;

    cout << "Digite o sexo (M/F): ";
    cin >> sexo;

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
        cout << "Peso ideal (homem): " << peso << endl;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        cout << "Peso ideal (mulher): " << peso << endl;
    } else {
        cout << "Sexo invalido!" << endl;
    }

    return 0;
}