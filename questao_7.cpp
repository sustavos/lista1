#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int palpite;
    srand(time(NULL));
    int num = rand()%101;

    cout << "Dê um palpite de qual é o número oculto entre 0 e 100:" << endl;
    while(cin >> palpite){
        if(palpite > num){
            cout << "Palpite muito alto" << endl;
        }else{
            if (palpite < num){
                cout << "Palpite muito baixo" << endl;
            }else{
                cout << "Acertou!" << endl;
                break;
            }
        }
    }
    return 0;
}
