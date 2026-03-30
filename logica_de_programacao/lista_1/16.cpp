#include <iostream>
using namespace std;
int main() {
    int soma_dos_angulos_do_triangulo=180, a1, a2;
    cout << "Digite o valor dos dois angulos do triangulo: ";
    cin >> a1 >> a2;
    cout << "O valor do terceiro angulo do triangulo e: " << soma_dos_angulos_do_triangulo - (a1 + a2) << endl;
    return 0;
}