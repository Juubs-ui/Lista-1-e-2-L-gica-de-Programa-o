#include<iostream>
using namespace std;
 int main(){
    float a, b, c, d;
        cout << "instira o primeiro valor";
        cin >> a;
        cout << "insira o segundo valor";
        cin >> b;
    if (b < a){
        cout <<"Valor invalido" << endl;
    }
    else{
        cout << "insira o terceiro valor";
        cin >> c;
    }
    if (c < b){
        cout << "Valor invalido" << endl;
    }
   else{
        cout << "insira o quarto valor";
        cin >> d;
   }
    
   if(d > c){
        cout << d << "," << c << "," << b << "," << a << endl;
   }
    if (d<c&&d>b){
        cout << c << "," << d << "," << b << "," << a << endl;
}
   if (d<b&&d>a){
        cout << c << "," << b << "," << d << "," << a << endl;
   } 
if(d < a){
        cout << c << "," << b << "," << a << "," << d << endl;
}
   }
