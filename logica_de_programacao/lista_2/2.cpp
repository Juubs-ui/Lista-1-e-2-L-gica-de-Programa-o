#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3, n4, nota;
	cout << "insira suas notas: " ;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	nota =((n1+n2+n3+n4)/4);
	cout <<nota << endl ;
	if (nota < 7 ) {
	cout << "reprovado";
	}else {
	cout <<"aprovado";
	}
		return 0;
	}