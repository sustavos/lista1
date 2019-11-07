#include <iostream>

using namespace std;

void quadrado(int &valor);

int main(){
    int num;

    cout << "Informe um número: ";
    cin >> num;
    quadrado(num);
    cout << "O quadrado do número é: " << num << endl;
}

void quadrado(int &valor){
    valor *= valor;
}