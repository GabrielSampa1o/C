#include <iostream>

using namespace std;
/*
    se(dia de sol){
        vou ao clube
    }se não / caso contrário{
        vou ao cinema
    }
    */

    //teste lógico
    // >, <, >=, <=, ==,!=
    // 10 < 5 = false
    // 50 > 25 = true
    // 100 > (50*2) = false
    // 100 >= (50*2) = true
    // num > 0 == true
    // num < 0 == false
    // num >= 0 == true

int main(){
    
    int num1=10;
    int num2=50;
    int sol=5;
    char opc='s';

    if(sol >= 10){
        cout << "Vou ao clube \n\n";
    }else{
        cout << "Vou ao cinema \n\n";
    }
    
    return 0;
}