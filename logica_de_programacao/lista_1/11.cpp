#include<iostream>
using namespace std;
    int main(){
        const int SALARIO_MINIMO = 1500;
        float salario;
            cout << "insira o salario do seu funcionario:";
                cin >> salario;
        int quantos = salario/ SALARIO_MINIMO;
            cout << "O seu funcionario ganha " << quantos << " salarios minimos!" << endl;
                return 0;
    }