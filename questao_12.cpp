#include <iostream>

using namespace std;

int contadorPares(int tam, int vetor[]);

int main(){
    int tam;

    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    int vetor[tam];

    for(int i=0; i < tam; i++){
        cout << "Informe o número da posição " << i << ": ";
        cin >> vetor[i];
    }

    cout << "A quantidade de números pares é: " << contadorPares(tam, vetor) << endl;
}

int contadorPares(int tam, int vetor[]){
    int cont=0;

    for(int i=0; i < tam; i++){
        if(vetor[i]%2==0) cont++;
    }
    return cont;
}