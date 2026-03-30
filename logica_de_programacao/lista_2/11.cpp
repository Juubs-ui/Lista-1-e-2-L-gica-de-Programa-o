#include<iostream>
using namespace std;
int salario_minimo=1500, mae=1600, pai=2000, filho1=500, filho2=700, tio=3000 , x=0;
int main(){
    if(mae>salario_minimo){
        x++;
    }
    if(pai>salario_minimo){
        x++;
    }
    if(filho1>salario_minimo){
        x++;
    }
    if(filho2>salario_minimo){
        x++;
    }
    if(tio>salario_minimo){
        x++;
    }
    cout<<"O numero de pessoas que recebem mais que o salario minimo e: "<<x;
}