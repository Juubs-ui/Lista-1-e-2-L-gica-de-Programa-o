#include<iostream>
using namespace std;
int main(){
int a,b,c,d,temp;
 cout<<"Insira seus 3 valores!";
 cin >> a >> b >> c;
    if (a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if (b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if (a>b){
        temp=a;
        a=b;
        b=temp;
}
    cout<< a << " " << b << " " << c << " " << d << endl; 
    return 0;
}