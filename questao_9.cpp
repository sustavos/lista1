#include <iostream>

using namespace std;

string HelloNome (string Nome);

int main(){
    string Nome;
    cout << "Informe o seu nome: ";
    cin >> Nome;
    HelloNome (Nome);
    return 0;
}

string HelloNome (string Nome){
    cout << "Hello " << Nome << "!" << endl;
}