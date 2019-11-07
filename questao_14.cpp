#include <iostream>

using namespace std;

bool ehPalindroma(string palavra);

int main(){
    string palavra;

    cout << "Informe uma palavra: ";
    cin >> palavra;

    if (ehPalindroma(palavra)) cout << "True" << endl;
    else cout << "False" << endl;
}

bool ehPalindroma(string palavra){
    int tam = palavra.size();
    char teste[tam];
    int i=0, j=0;

    for(i=0, j=tam; i < tam; i++, j--){
        teste[i] = palavra[j-1];
    }

    for(i=0; i < tam; i++){
        if(teste[i] != palavra[i])
            return 0; break;
    }
    return 1;
}