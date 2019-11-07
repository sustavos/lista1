#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arquivo;
    string texto;
    arquivo.open("input.txt");

    while(getline(arquivo,texto)){
       cout << texto << endl;
    }
    
    arquivo.close();
    return 0;
}