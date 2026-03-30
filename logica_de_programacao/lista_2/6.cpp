#include <iostream>
using namespace std;

int main() {
  float senha, registro;
  senha = 4531;
  cout << "digite sua senha" <<endl;
  cin >> registro;
  if (registro == senha){
  cout <<"acesso liberado";
  }
  else {
  cout <<"Acesso negado";
  }
    return 0;
}
