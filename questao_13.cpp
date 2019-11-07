#include <iostream>

using namespace std;

bool soma_28(int tam, int vetor[]);

int main(){
    int tam;

    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    int vetor[tam];

    for(int i=0; i < tam; i++){
        cout << "Informe o número da posição " << i << ": ";
        cin >> vetor[i];
    }
    if(soma_28(tam, vetor)==1) cout << "True" << endl;
    else cout << "False" << endl;
}

bool soma_28(int tam, int vetor[]){
    int cont=0;
    for(int i=0; i < tam; i++){
        if(vetor[i]==2) cont++;
    }
    
    if(cont==4)return 1;
    else return 0;
}