#include<iostream>
#include<cmath>
using namespace std;

    int main(){
        float peso, altura;
        float IMC;
        cout << "Insira o seu peso: ";
        cin >> peso;
        if(peso <= 0 ){
            cout << "Peso invalido! ";
            return 0;
        }
        else {
        cout << "Agora insira a sua altura: ";
        cin >> altura;
        }
        if (altura <= 0){
            cout << "Altura invalida! ";
            return 0;
        }
        IMC = (peso/(pow(altura, 2)));
    cout << "O seu IMC eh de: " << IMC << endl;
        if (IMC<=18.5){
            cout << "Voce esta abaixo do peso! ";
        }
        else if (18.5<IMC && IMC <= 25){
            cout << "Voce tem um peso normal! ";
        }
         else if (25<IMC && IMC <= 30){
            cout << "Voce esta acima do peso!";
        }
         else if (30<IMC){
            cout << "Voce esta obeso! ";
        }
        else if (50<IMC){
            cout << "Te dou duas semanas :( ";
        }
        return 0;
    }