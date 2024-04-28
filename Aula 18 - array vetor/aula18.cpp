#include <iostream>

using namespace std;

int main(){

    int vetor [7]={10,20,30,40,50,60,70};

    for (int i=0; i < sizeof(vetor)/4; i++){
        cout << vetor[i]<< endl;
    }

    return 0;
}