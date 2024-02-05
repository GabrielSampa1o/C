#include <iostream>

using namespace std;

int main(){

    //(expressão) ? valor1 : valor2;

    int n1, x;
   
    x=5;

    cout << "Digite um valor: ";
    cin >> n1;

    // >=60 Aprovado
    // <60 Reprovado

    //(nota >= 60) ? res="Aprovado" : res="Reprovado";

    (n1 >=10) ? x++ : x--;

    cout << "\nNovo valor do x: " << x << "\n";

    return 0;
}