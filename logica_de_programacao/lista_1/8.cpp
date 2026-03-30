#include<iostream>
using namespace std;
int main(){
    float vendas;
    float salário=1500;
    cout<<"insira o valor das vendas: ";
    cin>>vendas;
    cout<<"o salário total é: "<<salário+((vendas*4)/100)<<"R$";
}