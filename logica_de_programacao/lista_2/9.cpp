#include <iostream>
using namespace std;

int main() {
    int codigo;
    float salario, aumento, novoSalario;

    cout << "Digite o codigo do cargo: ";
    cin >> codigo;

    cout << "Digite o salario atual: ";
    cin >> salario;

    if (codigo == 1) {
        aumento = salario * 0.50;
        cout << "Cargo: Escrituario" << endl;
    } else if (codigo == 2) {
        aumento = salario * 0.35;
        cout << "Cargo: Secretario" << endl;
    } else if (codigo == 3) {
        aumento = salario * 0.20;
        cout << "Cargo: Caixa" << endl;
    } else if (codigo == 4) {
        aumento = salario * 0.10;
        cout << "Cargo: Gerente" << endl;
    } else if (codigo == 5) {
        aumento = 0;
        cout << "Cargo: Diretor" << endl;
    } else {
        cout << "Codigo invalido!" << endl;
        return 0;
    }

    novoSalario = salario + aumento;

    cout << "Aumento: " << aumento << endl;
    cout << "Novo salario: " << novoSalario << endl;

    return 0;
}