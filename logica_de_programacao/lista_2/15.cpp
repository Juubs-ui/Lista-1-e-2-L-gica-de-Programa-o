#include<iostream>
using namespace std;

int main(){
    float n1, n2, n3, Media;
    char conceito;

    cout << "Digite as 3 notas do aluno: ";
    cin >> n1 >> n2 >> n3;

    Media = (7*n1 + 2*n2 + 1*n3) / (7+2+1);

    if (Media < 50){
        conceito = 'E';
    }
    else if (Media < 60){
        conceito = 'D';
    }
    else if (Media < 70){
        conceito = 'C';
    }
    else if (Media < 85){
        conceito = 'B';
    }
    else{
        conceito = 'A';
    }

    cout << "Media: " << Media << endl;
    cout << "Conceito: " << conceito;

    return 0;
}
