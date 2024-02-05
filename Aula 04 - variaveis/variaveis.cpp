#include <iostream>
 
using namespace std;

 int main(){

   ///TIPO NOME;
   ///TIPO NOME = VALOR;

   int vidas=0; ///ACEITA NUMEROS INTEIROS 1, 10 ,32
   char letra='A'; ///ACEITA UMA LETRA 'a'
   char letras[20]; ///ACEITA ATÉ 20 CARACTERES
   double decimal=5.3333; ///ACEITA NUMEROS REAIS 2.9999999
   float decimal2=5.3; ///ACEITA NUMEROS REAIS 2.5 
   bool vivo=true; ///ACEITA TRUE-1-VERDADEIRO OU FALSE-0-FALSO
   string nome="Gabriel"; ///ACEITA UM TEXTO "Olá mundo!"

   cout << "Digite o numero de vidas: ";
   cin >> vidas;
   cout << "Digite uma letra: ";
   cin >> letra;
   cout << "Dinheiro: ";
   cin >> decimal;
   cout << "Digite seu nome: ";
   cin >> nome;

   cout << vidas << "\n";
   cout << letra << "\n";
   cout << decimal << "\n";
   cout << vivo << "\n";
   cout << nome << "\n";

    return 0;
 }