#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("input.txt");
    
    arquivo << "Estou adicionando mais uma linha" << endl;
    arquivo << "C++ é mais fácil que C" << endl;

    arquivo.close();
    return 0;
}