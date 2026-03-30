#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    int opcao;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "\nEscolha a operacao:\n";
    cout << "1 - Media entre os numeros\n";
    cout << "2 - Diferenca do maior pelo menor\n";
    cout << "3 - Produto entre os numeros\n";
    cout << "4 - Divisao do primeiro pelo segundo\n";
    cout << "Opcao: ";
    cin >> opcao;
    if (opcao == 1){
    cout << ((n1+n2)/2);
}
    else if (opcao == 2){
    if (n1 > n2)
    cout << "diferenca: " << n1 - n2 << endl;
        else
    cout << "diferenca: " << n2 - n1 << endl;
    }
    else if (opcao == 3){
    cout << (n1*n2);
    }
    else if (opcao == 4){
    if (n2 != 0)
    cout << (n1 / n2);
    else
    cout << "Erro: divisao por zero!" << endl;
    }
    return 0;
}