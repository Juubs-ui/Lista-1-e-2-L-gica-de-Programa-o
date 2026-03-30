#include<iostream>
using namespace std;
int main(){
    float n1, n2, n3, médiaP;
    cout << "Digite a nota do aluno: ";
    cin >> n1 >> n2 >> n3;
    médiaP = (n1*2 + n2*1 + n3*3) / 6;
    cout << "A media do aluno e: " << médiaP << endl;
    return 0;
}