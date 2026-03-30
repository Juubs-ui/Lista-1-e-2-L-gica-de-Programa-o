#include<iostream>
using namespace std;
int main(){
    float n1, n2, Media;
    string peso1= "2", peso2 = "3";
    cout << "Digite a nota do aluno: ";
    cin >> n1 >> n2;
    Media = (n1*stof(peso1) + n2*stof(peso2)) / (stof(peso1) + stof(peso2));
    cout << "A media ponderada do aluno e: " << Media << endl;
    return 0;
}