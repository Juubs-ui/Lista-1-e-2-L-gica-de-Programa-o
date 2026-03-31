#include <iostream>
using namespace std;

int main() {
    float salario, salarioMin, contribuicao;

    cin >> salario >> salarioMin;

    if (salario <= 3 * salarioMin) {
        contribuicao = salario * 0.08;
    } else {
        contribuicao = salario * 0.10;
    }

    if (contribuicao > salarioMin) {
        contribuicao = salarioMin;
    }

    cout <<"Sua contribuição foi de " << contribuicao << endl;

    return 0;
}
