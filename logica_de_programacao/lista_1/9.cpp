#include<iostream>
using namespace std;
int main(){
    float Pesokg, pesog;
    cout << "Insira seu peso: ";
    cin >> Pesokg;
    pesog = (Pesokg*1000);
    cout << "o peso é: " << pesog << endl;
    return 0;
}