#include <iostream>

using namespace std;

int n1, n2;  //variáveis globais


int main(){

    /*
    operadores matemáticos: 
    // soma: + 
    // subtração: - 
    // divisão: / 
    // multiplicação: * 
    // resto de divisão: %
    // prioriza a operação: ()
    */

    int n3,n4;  //variáveis locais
    int res1, res2;
    

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res1 = n1 / n2;
    res2 = n1 % n2;

    cout << "Divisao: " << res1 << "\n" ;
    cout << "Resto: " << res2 << "\n\n" ;

    return 0;
}