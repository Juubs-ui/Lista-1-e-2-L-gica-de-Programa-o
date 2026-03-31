#include <iostream>
using namespace std;
int main() {
    int angulo;
    cin >> angulo;
    angulo = angulo % 360;
    if(angulo < 0) {
        angulo += 360;
    }
    if(angulo >= 0 && angulo < 90) {
        cout << "Angulo se localiza no 1º quadrante" << endl;
    } else if(angulo < 180) {
        cout << "Angulo se localiza no 2º quadrante" << endl;
    } else if(angulo < 270) {
        cout << "Angulo se localiza no 3º quadrante" << endl;
    } else {
        cout << "Angulo se localiza no 4º quadrante" << endl;
    }
    return 0;
}
