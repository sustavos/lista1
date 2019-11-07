#include <iostream>

using namespace std;

float somaDeFloats (float a, float b);

int main(){
    float a, b, resultado;
    cout << "Informe dois números: " << endl;
    cin >> a >> b;

    resultado = somaDeFloats(a,b);

    cout << "A soma é: " << resultado << endl;

}

float somaDeFloats(float a, float b){
    if(a == b){
        return (a+b)*2;
    }else{
        return a + b;
    }
}