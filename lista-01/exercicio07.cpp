#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int x, y;

  cout << "Digite um número: ";
  cin >> x;

  cout << "Digite um segundo número: ";
  cin >> y;
  
  cout << "Valores fornecidos: x = " << x << ", e y = " << y;

  //Troca de valores usando uma variável temporária
  int temp = x;
  x = y;
  y = temp;

   cout << "\nValores trocados: x = " << x << ", e y = " << y;
 
 
  cout << endl << endl;
  return 0;
}