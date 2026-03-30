#include<iostream>
using namespace std;
int main(){
    float Raio, Area, pi;
    pi=3.14;
    cout << "Insira seu as medidas: ";
    cin >> Raio;
    Area = (Raio*Raio*pi);
    cout << "a Area  é: " << Area << endl;
    return 0;
}