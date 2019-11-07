#include <iostream>
using namespace std;

int quadrado(){
  int valor;
  cout << "Digite algum valor\n";
  cin >> valor;
  return valor*valor;
}
int main() {
  cout << quadrado();
  return 0;
}