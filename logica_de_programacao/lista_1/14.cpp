#include<iostream>
using namespace std;
int main(){
    int Celcius;
    float Farenheit;
    cout<<"Digite a temperatura em Celcius: ";
    cin>>Celcius;
    Farenheit = ((9.0/5.0)*Celcius)+32;
    cout<<"A temperatura em Farenheit é: "<<Farenheit<<endl;
    return 0;
}
// o exercício pede para converter a temperatura de Celcius para Farenheit, a fórmula correta é: F =((9.0/5.0)*Celcius)+32 porém o exercício estava com a fórmula errada,
// então corrigi para a fórmula correta. O programa solicita ao usuário que insira a temperatura em Celcius,
 //realiza a conversão usando a fórmula e exibe o resultado em Farenheit.