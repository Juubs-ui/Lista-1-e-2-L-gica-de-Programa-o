#include<iostream>
using namespace std;
int main(){
    float Raio, volume , pi;
    pi=3.14;
    cout << "Insira seu as medidas: ";
    cin >> Raio;
    volume  = (Raio*Raio*Raio*pi*0.75);
    cout << "O volume   é: " << volume  << endl;
    return 0;
}