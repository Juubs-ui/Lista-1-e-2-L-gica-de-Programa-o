#include <iostream>
using namespace std;

int main() {
    float salario, reajuste;
    cout << "Insira seu salario: " << endl;
    cin >> salario;
    if (salario<500){
    reajuste = (salario+((salario*30)/100));
    cout <<"Slario reajustado" <<reajuste;
    }else{
    cout << "Voce nao tem direito so reajuste salarial";
    }
    return 0;
}