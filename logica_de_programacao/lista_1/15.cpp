#include <iostream>
using namespace std;
int main() {
    float salario, hora, extra, minimo, valorh, valorex ;
    cout << "Insira os dados: ";
    cin >> minimo;
    cin >> hora;
    cin >> extra;
    valorh = minimo/8;
    valorex = minimo/4;
    salario =((hora*valorh)+(extra*valorex));
    cout << "O salario bruto e: " << salario << endl;
    return 0;
}