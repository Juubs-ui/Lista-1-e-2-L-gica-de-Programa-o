#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a,b,c;
 float delta;
cout<<"Digite os coeficientes a,b e c da equação do segundo grau: ";
cin>>a>>b>>c;
if (a==0){
  cout<<"Não é uma equação do segundo grau.";
  return 0;
}
else{
  delta=pow(b,2)-4*a*c;
}
   if (delta<0){
    cout<<"A equacao nao possui raizes reais.";
   }
    else if (delta==0){
        cout<<"A equacao possui uma raiz real: "<<-b/(2*a);
    }
    else {
        cout<<"A equacaoi possui duas raizes reais: "<<(-b+sqrt(delta))/(2*a)<<"e"<<(-b-sqrt(delta))/(2*a);
    }
    return 0;
}