#include<iostream>
using namespace std;
int main(){
    float basemaior, basemenor, altura, area;
    cout << "Insira seu as medidas: ";
    cin >> basemaior;
    cin >> basemenor;
    cin >> altura;
    area = (((basemaior+basemenor)*altura)/2);
    cout << "A area é: " << area << endl;
    return 0;
}