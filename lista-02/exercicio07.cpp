#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int lado;
  int num_Pedaco = 1;

  cout << "Insira o tamanho do lado da barra em cm: ";
  cin >> lado;

  while (lado >= 2){

    num_Pedaco = num_Pedaco * 4;
    lado = lado / 2;
    
  }
  

  cout << "\nAo final você terá " << num_Pedaco << " pedaços!" << endl;
 
  cout << endl << endl;
  return 0;
}