#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int numero, ant, suces;
  
  cout << "Digite um número: ";
  cin >> numero;

  ant = numero - 1;
  suces = numero + 1;

  cout << "O antecessor do número " << numero << " é igual a: " << ant << endl;
  cout << "O secessor do número " << numero << " é igual a: " << suces << endl;
 
  cout << endl << endl;
  return 0;
}