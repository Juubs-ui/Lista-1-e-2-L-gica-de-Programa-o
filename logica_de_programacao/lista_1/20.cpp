#include <iostream>
using namespace std;

    int main () {
        float altura, massa, imc;
        cout << "Digite sua altura: \n";
        cin >> altura;
        cout << "Digite seu peso: \n";
        cin >> massa;
        imc = massa / (altura*altura);
        cout << "O seu IMC é de " << imc << endl; 
        return 0; 
    }