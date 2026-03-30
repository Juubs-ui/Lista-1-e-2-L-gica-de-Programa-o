#include <iostream>
using namespace std;

int main () {
    float peso, nvpeso;
    cout << "Qual o seu peso? ";
    cin >> peso;
    nvpeso = peso*0.8;
    cout << "Seu peso será de " << nvpeso << endl;
    return 0;
}