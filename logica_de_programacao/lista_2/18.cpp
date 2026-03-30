#include<iostream>
using namespace std;
int main(){
    int a, b, c, temp;
    string Usuario;
    string juliano = "Juliano";
    string matheus = "Matheus";
    cout << "Usuarios cadastrados: Juliano, Matheus" << endl
    << "Quem eh voce?"; 
    cin >> Usuario;
    if (Usuario == juliano){
        cout << "insira os seus valores! ";
         cin >> a >> b >> c;
    if (a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if (b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if (a>b){
        temp=a;
        a=b;
        b=temp;
}
    cout<<"Seus valores em ordem crescente sao: " << a << " " << b << " " << c;
    }

    if (Usuario == matheus){
          cout << "insira os seus valores! ";
        cin >> a >> b >> c;
    if(c > b){
        cout << "Seus valores em ordem decrescente sao: " << c << "," << b << "," << a << endl;
   }
    if (c<b&&c>a){
        cout << "Seus valores em ordem decrescente sao: " << b << "," << c << "," << a << endl;
}
   if (b<a&&b>c){
        cout << "Seus valores em ordem decrescente sao: " << a << "," << b << "," << c << endl;
   } 

}
return 0;
}
