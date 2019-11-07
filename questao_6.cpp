#include <iostream>

using namespace std;

int main(){
    float num1, num2, resul;
    char operador;

    cout << "Informe dois números e o operador matemático:" << endl;
    cin >> num1 >> num2 >> operador;

    switch (operador){
        case '+': 
            resul = num1 + num2;
            cout << num1 << " + " << num2 << " = " << resul << endl;
            break;
        case '-': 
            resul = num1 - num2;
            cout << num1 << " - " << num2 << " = " << resul << endl;
            break;
        case '*': 
            resul = num1 * num2;
            cout << num1 << " * " << num2 << " = " << resul << endl;
            break;
        case '/': 
            resul = num1 / num2;
            cout << num1 << " / " << num2 << " = " << resul << endl;
            break;
        default:
            cout << "Operador inválido." << endl;
    }
    return 0;
}