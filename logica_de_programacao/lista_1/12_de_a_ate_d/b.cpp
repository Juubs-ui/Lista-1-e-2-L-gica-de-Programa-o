#include<iostream>
using namespace std;
int main(){
    int A=2026,N;
    cout<<"Digite o ano de nascimento: ";
    cin>>N;
    int idade=A-N;
    cout<<"A idade é: "<<idade*12<<" meses";
    return 0;
}