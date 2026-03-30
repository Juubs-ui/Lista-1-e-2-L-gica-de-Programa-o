#include <iostream>
using namespace std;
int main() {
    float media, mediafinal, n1, n2, n3, np;
    cout << "Digite as notas das 3 provas respectivamente \n";
    cin >> n1 >> n2 >> n3;
    media = (n1 + n2 + n3) / 3;
    if (media >= 6.0)
    {
        cout << "O aluno foi aprovado e sua média foi de " << media << endl;
    }
    else
    {
        cout << "A nota não atingiu as expectativas, pois foi de " << media << endl;
        cout << "Digite a nota obtida na recuperação paralela: ";
        cin >> np;
        mediafinal = (media + np) / 2;
        if (mediafinal >= 6.0)
        {
            cout << "O aluno foi aprovado na recuperação paralela com nota de " << mediafinal << endl;
        }
        else
        {
            cout << "O aluno ficou de recuperação mesmo com a paralela, pois sua nota foi de " << mediafinal << endl;
        }
    }

    return 0;
}