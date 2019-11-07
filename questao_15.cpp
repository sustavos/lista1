#include <iostream>

using namespace std;

int main (int argc, char *argv[]){
    int reverso = argc - 1;
    while(reverso > 0) cout << argv[reverso--] << " ";
    cout << endl;
    return 0;
}