#include <iostream>
using namespace std;

int main () {
    float peso, nvpeso;
    cout << "Qual o seu peso? ";
    cin >> peso;
    nvpeso = peso * 1.15 ;
    cout << "Seu novo peso será de " << nvpeso << endl;
    return 0;
}