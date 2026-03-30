#include <iostream>
using namespace std;

int main() {
    float vend, custo, lucro;
    cout << "Qual o preço da venda? \n";
    cin >> vend;
    custo = 0.8*vend;
    lucro = vend - custo;
    cout << "O custo da venda foi de R$"<< custo <<" enquanto o lucro foi de R$"<< lucro<< endl;
    return 0;
}