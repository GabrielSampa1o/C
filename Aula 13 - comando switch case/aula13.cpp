#include <iostream>

using namespace std;
/*
    switch(expressao){

        case const1:
            comandos;
            break;
        case const2:
            comandos;
            break;
        default:
            comandos;
    }
*/
int main(){

    int val;

    cout << "Selecione um transporte: \n";
    cout << "[1]=carro, [2]=moto, [3]=aviao, [4]=helicoptero \n";
    cin >> val;

    switch(val){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
                switch(val){
                    case 1:
                        cout << "Carro selecionado\n";
                        break;
                    case 2:
                        cout << "Moto selecionada\n";
                        break;
                        }
            break;
        case 3:
        case 4:
            cout << "\nTransporte aereo\n";
                switch(val){
                    case 3:
                        cout << "Aviao selecionado\n";
                        break;
                    case 4:
                        cout << "Helicoptero selecionada\n";
                        break;
                        }
            break;
        default:
            cout << "Valor selecionado invalido\n";
    }

    cout << "Programa finalizado!\n";


    return 0;
}