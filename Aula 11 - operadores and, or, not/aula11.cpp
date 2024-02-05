#include <iostream>

using namespace std;

/*
and / && / e
retorna verdadeira se todas as entradas forem verdadeiras
*/

/*
or / || / ou
retorna verdadeiro se pelo menos uma entrada for vedadeira
*/

/*
not / ! / de negação
Ele transforma o que é falso em verdadeiro, e o que é verdadeiro em falso
*/
int main(){

    int num;
    /*
    1 = verdadeiro / true
    0 = falso      / false
    */

   num=0;

   if(!num){
        cout << "\n\nVou ao clube\n";

   }else {
        cout << "\n\nVou ao cinema\n";
   }

    return 0;
}