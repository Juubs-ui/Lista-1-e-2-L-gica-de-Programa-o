#include<iostream>
using namespace std;
    int main(){
        int ano1, ano2, mes1, mes2, dia1, dia2;
        cout << "Insira a sua primeira data no formato de DIA/MES/ANO: ";
        cin >> dia1 >> mes1 >> ano1;
        cout << "Agora insira a sua segunda data no mesmo formato: ";
        cin >> dia2 >> mes2 >> ano2;
            if(ano1 > ano2){
                cout << "A data cronologicamente maior eh o de " << dia1 << "/" << mes1 << "/" << ano1 << endl;
            }
            else{
                cout << "A data cronologicamente maior eh o de " << dia2 << "/" << mes2 << "/" << ano2 << endl;
            }
        if(ano1 == ano2){
            if(mes1 > mes2){
               cout << "A data cronologicamente maior eh o de " << dia1 << "/" << mes1 << "/" << ano1 << endl; 
            }
             else{
                cout << "A data cronologicamente maior eh o de " << dia2 << "/" << mes2 << "/" << ano2 << endl;
        }
        if (mes1 == mes2){
            if(dia1 > dia2){
                cout << "A data cronologicamente maior eh o de " << dia1 << "/" << mes1 << "/" << ano1 << endl; 
            }
             else{
                cout << "A data cronologicamente maior eh o de " << dia2 << "/" << mes2 << "/" << ano2 << endl;
        }
        if (dia1==dia2){
            cout << "As datas sao iguais! ";
        }
    }
}
    }
