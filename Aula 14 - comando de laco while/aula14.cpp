#include <iostream>

using namespace std;

int main (){

    int cont;

    cont=0;

    while(cont++<=20){
        cout << "Sampaio - " << cont <<"\n";
        if (cont == 10) {
            break;
        }
    }

    cout << "\nRotina finalizda!\n";

    return 0;
}