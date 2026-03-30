#include<iostream>
using namespace std;
int main(){
    float angulo;
    cout << "insira o seu angulo: ";
    cin >> angulo;
    if (0 < angulo && angulo < 90){
        cout << "seu angulo pertence ao primeiro quadrante";
    }
    else if (90 < angulo && angulo < 180){
        cout << "seu angulo pertence ao segundo quadrante";
    }
    else if (180 < angulo && angulo < 270){
        cout << "seu angulo pertence ao terceiro quadrante";
}
    else if (270 < angulo && angulo < 360){
        cout << "seu angulo pertence ao quarto quadrante";
    }
    else{
        cout << "seu angulo nao pertence a nenhum quadrante";
    }
    return 0;
}