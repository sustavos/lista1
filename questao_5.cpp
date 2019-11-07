#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream arquivo;
    string texto;
    arquivo.open("input.txt", ios::app);

    cout << "Informe o conteúdo a ser adicionado no arquivo .txt em uma nova linha" << endl;
    cin >> texto;
    arquivo << texto << endl;

    arquivo.close();
    return 0;
}
