#include<iostream>
using namespace std;
int main(){
  // inclui a biblioteca iostream para entrada e saída de dados, 
  // inclui o namespace std para evitar a necessidade de usar std:: antes de cada elemento da biblioteca padrão, e define a função principal main que retorna um inteiro. 
    int numero;
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    // declara uma variável inteira numero para armazenar o número do mês e um array de strings meses que contém os nomes dos meses do ano.
    cout << "Digite um número de 1 a 12: ";
    cin >> numero;
    // solicita ao usuário que digite um número de 1 a 12 e armazena o valor na variável numero.
    if(numero >= 1 && numero <= 12){
        cout << "O mês correspondente é: " << meses[numero - 1] << endl;
    } else {
        cout << "Número inválido. Por favor, digite um número entre 1 e 12." << endl;
    }
    // verifica se o número digitado está entre 1 e 12. Se estiver, exibe o nome do mês correspondente usando o array meses (ajustando o índice para acessar o elemento correto). Caso contrário, exibe uma mensagem de erro indicando que o número é inválido.
    return 0;
}