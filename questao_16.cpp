#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <locale>
#include <stdio.h>

using namespace std;

string buscaPalavra(char letra, string forca, string palavra, int tam){
    int gatilho = 0;

    for(int i = 0; i < tam; i++){
        if(letra == forca[i]){
            palavra[i] = letra; 
            gatilho++;
        }

    }

    if(gatilho != 0){
        return palavra; 
    }else{
        return "false";
    }
}
void face(int chances){

    cout << " __" << endl;
    cout << " |/ |" << endl;

    if(chances <= 5) cout << " |  o" << endl;
    else cout << " |   " << endl;

    if(chances > 4) cout << " |   " << endl;
    if(chances == 4) cout << " |  |" << endl;
    if(chances == 3) cout << " | /|" << endl;
    if(chances <= 2) cout << " | /|\\ " << endl;

    if(chances > 1) cout << " |   " << endl;
    if(chances == 1) cout << " | /" << endl;
    if(chances == 0) cout << " | / \\ " << endl;

    cout << "|   " << endl << endl;
}

int main(){

    setlocale(LC_ALL, "portuguese"); 

    string forca, 
    letras_ant, 
    palavra_generica;
    int tam, chances = 6;
    char letra;

    ifstream entrada;
    entrada.open("input.txt");

    srand(time(NULL));
    int random = rand()%16;

    for(int i = 0; i < random; i++){ 
        getline(entrada, forca);
    }
    entrada.close();

    tam = (int)forca.size();

    char palavra[tam];



    for(int i = 0; i < tam; i++) palavra[i] = '-';




    while(palavra != forca){
        system("cls");
        face(chances);
        cout << "Palavra: " << (string)palavra << endl;
        cout << "Letras anteriores: " << letras_ant << endl;

        if(chances == 0){
            cout << endl << "Você perdeu, Fim de jogo" << endl << "Palavra: " << forca << endl;

            fflush(stdin);
            getchar();
            return 0;
        }

        cout << "Digite uma letra: ";
        cin >> letra;

        if((buscaPalavra(letra, forca, palavra, tam)) != "false"){ 
            palavra_generica = (buscaPalavra(letra, forca, palavra, tam));

            for(int i = 0; i < tam; i++){
                palavra[i] = palavra_generica[i];
            }
        }else{
            chances--;
        }

        letras_ant += letra; 
        letras_ant += ", ";
    }

    
    cout << "Palavra: " << palavra << endl << "Você ganhou!" << endl;

    fflush(stdin);
    getchar();

  return 0;
}