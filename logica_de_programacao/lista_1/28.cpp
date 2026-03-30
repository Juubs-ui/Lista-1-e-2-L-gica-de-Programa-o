#include <iostream>
using namespace std;

int main () {
    int salmin, horatrab;
    float valhoratrab, salbrut, impos, salaliq;
    cout << "Qual o valor do salário mínimo? \n";
    cin >> salmin;
    cout << "Trabalhou por quantas horas? \n";
    cin >> horatrab;
    valhoratrab = salmin * 0.5;
    salbrut = horatrab * valhoratrab;
    impos = salbrut * 0.03;
    salaliq = salbrut - impos;
    cout << "Ao fim do dia, o salário a receber com será de R$" << salaliq << endl;
    return 0;
}