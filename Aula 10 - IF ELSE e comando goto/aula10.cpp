#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int nota1,nota2,result;
    char opc;

    inicio:
    
    system("cls");

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    result = nota1 + nota2;

    /*
        >= 60 Aprovado
        >= 40 e < 60 Recuperação
        <50 Reprovado
    */

    if(result >= 60){
        cout << "\nAluno aprovado!\n";
    }else if(result >= 40){
        cout << "\nAluno em Recuperacao!\n";
    }else{
        cout << "\nAluno Reprovado!\n";
    }

    cout << "\nDigitar outras notas?(s/n): ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

    return 0;
}