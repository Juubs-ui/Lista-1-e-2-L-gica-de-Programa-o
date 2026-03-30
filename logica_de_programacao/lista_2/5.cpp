#include <iostream>
using namespace std;

int main() {
    float saldo, credito;
    cout << "Insira seu saldo: " << endl;
    cin >> saldo;
    if (saldo>400){
    credito = ((saldo*30)/100);
    cout <<"Seu saldo e: " <<saldo <<endl;
    cout <<"Seu credito e: " <<credito;
    }
    if (saldo>300.01 && saldo<400){
    credito = ((saldo*25)/100);
    cout <<"Seu saldo e: " <<saldo <<endl;
    cout <<"Seu credito e: " <<credito;
    }
   if (saldo>200.01 && saldo<300){
    credito = ((saldo*20)/100);
    cout <<"Seu saldo e: " <<saldo <<endl;
    cout <<"Seu credito e: " <<credito;
    }
    if (saldo<200){
    credito = ((saldo*10)/100);
    cout <<"Seu saldo e: " <<saldo <<endl;
    cout <<"Seu credito e: " <<credito;
    }
    return 0;
}