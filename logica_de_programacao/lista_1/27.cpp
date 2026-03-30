#include <iostream>
using namespace std;

int main () {
    float metro1, metro2, metroquad, poten;
    cout << "Quais os respectivos comprimentos do cômodo? \n";
    cin >> metro1 >> metro2;
    metroquad = metro1 * metro2;
    poten = 18 * metroquad;
    cout << "O cômodo possui "<< metroquad <<" m² e a potência de iluminação necessaria será de "<< poten<< " W" << endl;
    return 0;
}