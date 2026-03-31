#include <iostream>
using namespace std;

int main() {
    float nota, soma = 0;

    for(int i = 1; i <= 5; i++) {
        cin >> nota;

        if(nota < 0 || nota > 20) {
            cout << "Valor invalido" << endl;
            return 0;
        }

        soma += nota;
    }

    if(soma >= 70) {
        cout << "Aprovado" << endl;
    } else if(soma >= 30) {
        cout << "Exame" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
    return 0;
}
