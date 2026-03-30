#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float Raio, comprimento, pi;
    pi=3.14;
    cout << "Insira seu as medidas: ";
    cin >> Raio;
    comprimento = (Raio*2*pi);
    cout << "O comprimento  é: " << comprimento << endl;
    return 0;
}