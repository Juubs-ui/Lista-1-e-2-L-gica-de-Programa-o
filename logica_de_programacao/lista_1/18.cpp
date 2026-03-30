#include<iostream>
using namespace std;
    int main(){   
    float salario_bruto;
        cout << "insira o salario do seu funcionario:";
            cin >> salario_bruto;
                cout << "O salario liquido do seu funcionario eh:" << ((salario_bruto)-((salario_bruto)*2/100)) << "!" << endl;
return 0;

}
//nesssa atividade considerei que o imposto é referente a 2% do salario(queria que fosse assim no mundo real tbm )