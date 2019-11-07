#include <iostream>

using namespace std;

bool criancassorrindo(bool mariaSorrindo, bool joaoSorrindo);

int main(){
    bool mariaSorrindo = 0 , joaoSorrindo = 0;
    
    cout << "Maria está sorrindo? (1 para sim ou 0 para não): ";
    cin >> mariaSorrindo;
    cout << "João está sorrindo? (1 para sim ou 0 para não): ";
    cin >> joaoSorrindo;
    
    if (criancassorrindo(mariaSorrindo, joaoSorrindo)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    return 0;
}

bool criancassorrindo(bool mariaSorrindo, bool joaoSorrindo){
    if(mariaSorrindo && joaoSorrindo || mariaSorrindo == 0 && joaoSorrindo ==0){
        return true;
    }else{
        return false;
    }
}